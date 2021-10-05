/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:54:10 by arolland          #+#    #+#             */
/*   Updated: 2021/08/24 15:02:22 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	player_go_up(t_data *d)
{
	int	i;

	i = 0;
	if (d->tab[d->i->p_h - 1][d->i->p_w] != '1')
	{
		if (d->tab[d->i->p_h - 1][d->i->p_w] != 'E')
			player_go_up2(d, i);
		else if (d->tab[d->i->p_h - 1][d->i->p_w] == 'E')
		{
			if (d->flag == d->check)
				allow_exit(d);
			else
				printf("Get more pokeball to get more pokemon! #Sacha2022 !\n");
		}
	}
}

void	player_go_left(t_data *d)
{
	int	i;

	i = 0;
	if (d->tab[d->i->p_h][d->i->p_w - 1] != '1')
	{
		if (d->tab[d->i->p_h][d->i->p_w - 1] != 'E')
			player_go_left2(d, i);
		else if (d->tab[d->i->p_h][d->i->p_w - 1] == 'E')
		{
			if (d->flag == d->check)
				allow_exit(d);
			else
				printf("Get more pokeball to get more pokemon! #Sacha2022 !\n");
		}
	}
}

void	player_go_down(t_data *d)
{
	int	i;

	i = 0;
	if (d->tab[d->i->p_h + 1][d->i->p_w] != '1')
	{
		if (d->tab[d->i->p_h + 1][d->i->p_w] != 'E')
			player_go_down2(d, i);
		else if (d->tab[d->i->p_h + 1][d->i->p_w] == 'E')
		{
			if (d->flag == d->check)
				allow_exit(d);
			else
				printf("Get more pokeball to get more pokemon! #Sacha2022 !\n");
		}
	}
}

void	player_go_right(t_data *d)
{
	int	i;

	i = -1;
	if (d->tab[d->i->p_h][d->i->p_w + 1] != '1')
	{
		if (d->tab[d->i->p_h][d->i->p_w + 1] != 'E')
			player_go_right2(d, i);
		else if (d->tab[d->i->p_h][d->i->p_w + 1] == 'E')
		{
			if (d->flag == d->check)
				allow_exit(d);
			else
				printf("Get more pokeball to get more pokemon! #Sacha2022 !\n");
		}
	}
}

int	record_keys(int keycode, t_data *d)
{
	if (keycode == W)
	{
		player_go_up(d);
		you_died(d);
	}
	else if (keycode == A)
	{
		player_go_left(d);
		you_died(d);
	}
	else if (keycode == S)
	{
		player_go_down(d);
		you_died(d);
	}
	else if (keycode == D)
	{
		player_go_right(d);
		you_died(d);
	}
	return (1);
}
