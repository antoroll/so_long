/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:58:50 by arolland          #+#    #+#             */
/*   Updated: 2021/08/24 15:07:39 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_struct(t_data *data)
{
	data->i->w = 0;
	data->i->h = 0;
	data->i->p_w = 0;
	data->i->p_h = 0;
	data->flag = 0;
	data->check = 0;
	data->count = 1;
	data->t->i = -1;
	data->i->pat_w = 0;
	data->i->pat_h = 0;
	data->i->i = -1;
	data->i->flag = 0;
	data->affichage = NULL;
	data->j = -1;
}

void	init_dimensions(t_data *data, char *argv)
{
	int		fd;
	int		ret;
	char	*line;

	init_struct(data);
	fd = open(argv, O_RDONLY);
	check_fd(data, fd);
	ret = get_next_line(fd, &line, 1);
	if (ft_strlen(line) > 48)
		error_message_invalid_map(data);
	if (ret == 1)
		data->i->h++;
	data->j = -1;
	while (line[++data->j])
		data->i->w++;
	free(line);
	while (get_next_line(fd, &line, 1))
	{
		data->i->h++;
		if (ft_strlen(line) != data->j)
			error_lines(data);
		free(line);
	}
	free(line);
	close(fd);
}

char	**init_tab(t_data *data, char *argv, int j, int fd)
{
	char	*line;
	int		k;

	data->tab = (char **)malloc(sizeof(char *) * (data->i->h + 1));
	if (!data->tab)
		return (NULL);
	fd = open(argv, O_RDONLY);
	while (++j < data->i->h)
	{
		data->tab[j] = (char *)malloc(sizeof(char) * (data->i->w + 1));
		if (!data->tab[j])
			return (free_tab(data, data->tab));
		k = -1;
		while (get_next_line(fd, &line, 1))
		{
			while (line[++k])
				data->tab[j][k] = line[k];
			data->tab[j][k] = 0;
			free(line);
			break ;
		}
	}
	data->tab[j] = 0;
	close(fd);
	return (data->tab);
}

void	init_game(t_data *data)
{
	data->i = malloc(sizeof(t_img));
	data->t = malloc(sizeof(t_textures));
}
