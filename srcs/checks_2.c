/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:35:03 by arolland          #+#    #+#             */
/*   Updated: 2021/08/23 18:24:50 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_extension(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	i -= 4;
	while (argv[i])
	{
		if (argv[i] != '.' || argv[i + 1] != 'b'
			|| argv[i + 2] != 'e' || argv[i + 3] != 'r')
		{
			ft_putstr_fd("Error\nFile must end with .ber\n", 2);
			exit (0);
		}
		break ;
	}
}

void	check_walls(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->i->h)
	{
		j = -1;
		while (++j < data->i->w)
			if (!(data->tab[data->i->h - 1][j] == '1'
				&& data->tab[0][j] == '1' && data->tab[i][0] == '1'
				&& data->tab[i][data->i->w - 1] == '1'))
				error_message_invalid_map(data);
	}
}

void	check_map_size(t_data *data)
{
	if (data->i->w > 48 || data->i->h > 27)
		error_message_invalid_map(data);
}

void	check_fd(t_data *d, int fd)
{
	if (fd < 0)
	{
		ft_putstr_fd("Error\nThis file does not exist.\n", 2);
		free(d->i);
		free(d->t);
		exit(0);
	}
}
