/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:32:04 by arolland          #+#    #+#             */
/*   Updated: 2021/08/23 18:15:23 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_collectibles(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->i->h)
	{
		j = -1;
		while (++j < data->i->w)
			if (data->tab[i][j] == 'C')
				data->check++;
	}
}

void	check_players(t_data *data)
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	i = -1;
	while (++i < data->i->h)
	{
		j = -1;
		while (++j < data->i->w)
		{
			if (data->tab[i][j] == 'P')
				flag++;
			if (data->tab[i][j] == 'N')
				data->i->flag++;
		}
	}
	if (flag > 1 || data->i->flag > 1)
		error_message_invalid_map(data);
}

void	check_characters(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->i->h)
	{
		j = -1;
		while (++j < data->i->w)
		{
			if (!(data->tab[i][j] == '1' || data->tab[i][j] == '0'
				|| data->tab[i][j] == 'C' || data->tab[i][j] == 'E'
				|| data->tab[i][j] == 'P' || data->tab[i][j] == 'N'))
				error_message_invalid_map(data);
		}
	}
}

void	check_mapping(t_data *data, int flag_exit,
		int flag_collectible, int flag_player)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->i->h)
	{
		j = -1;
		while (++j < data->i->w)
		{
			if (data->tab[i][j] == 'E')
				flag_exit = 1;
			else if (data->tab[i][j] == 'C')
				flag_collectible = 1;
			else if (data->tab[i][j] == 'P')
				flag_player = 1;
		}
	}
	if (flag_exit < 1 || flag_collectible < 1 || flag_player < 1)
		error_message_invalid_map(data);
}

void	checks(t_data *data)
{
	check_map_size(data);
	check_characters(data);
	check_walls(data);
	check_mapping(data, 0, 0, 0);
	check_collectibles(data);
	check_players(data);
}
