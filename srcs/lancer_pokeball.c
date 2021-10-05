/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lancer_pokeball.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:14:00 by arolland          #+#    #+#             */
/*   Updated: 2021/08/23 18:46:10 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	lancer_pokeball(t_data *d)
{
	int	i;

	i = -1;
	while (++i < 15000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->lancer1, d->i->p_w * 40, d->i->p_h * 40);
	while (i++ < 30000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->lancer2, d->i->p_w * 40, d->i->p_h * 40);
	while (i++ < 45000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->lancer3, d->i->p_w * 40, d->i->p_h * 40);
	while (i++ < 60000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->lancer4, d->i->p_w * 40, d->i->p_h * 40);
}

void	lancer_pokeball_2(t_data *d)
{
	if (d->i->p_w == d->i->pat_w + 2 && d->i->p_h == d->i->pat_h)
	{
		while (++d->i->i < 20000)
			mlx_put_image_to_window(d->mlx, d->mlx_win,
				d->t->pokeball, (d->i->p_w - 1) * 40, d->i->p_h * 40);
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->herbe, (d->i->p_w - 1) * 40, d->i->p_h * 40);
		while (d->i->i++ < 40000)
			mlx_put_image_to_window(d->mlx, d->mlx_win,
				d->t->pokeball_ouvert, (d->i->p_w - 2) * 40, d->i->p_h * 40);
	}
	if (d->i->p_w == d->i->pat_w - 2 && d->i->p_h == d->i->pat_h)
	{
		while (++d->i->i < 20000)
			mlx_put_image_to_window(d->mlx, d->mlx_win,
				d->t->pokeball, (d->i->p_w + 1) * 40, d->i->p_h * 40);
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->herbe, (d->i->p_w + 1) * 40, d->i->p_h * 40);
		while (d->i->i++ < 40000)
			mlx_put_image_to_window(d->mlx, d->mlx_win,
				d->t->pokeball_ouvert, (d->i->p_w + 2) * 40, d->i->p_h * 40);
	}
}

void	lancer_pokeball_3(t_data *d)
{
	if (d->i->p_w == d->i->pat_w && d->i->p_h == d->i->pat_h + 2)
	{
		while (++d->i->i < 20000)
			mlx_put_image_to_window(d->mlx, d->mlx_win,
				d->t->pokeball, d->i->p_w * 40, (d->i->p_h - 1) * 40);
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->herbe, d->i->p_w * 40, (d->i->p_h - 1) * 40);
		while (d->i->i++ < 40000)
			mlx_put_image_to_window(d->mlx, d->mlx_win,
				d->t->pokeball_ouvert, d->i->p_w * 40, (d->i->p_h - 2) * 40);
	}
	if (d->i->p_w == d->i->pat_w && d->i->p_h == d->i->pat_h - 2)
	{
		while (++d->i->i < 20000)
			mlx_put_image_to_window(d->mlx, d->mlx_win,
				d->t->pokeball, d->i->p_w * 40, (d->i->p_h + 1) * 40);
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->herbe, d->i->p_w * 40, (d->i->p_h + 1) * 40);
		while (d->i->i++ < 40000)
			mlx_put_image_to_window(d->mlx, d->mlx_win,
				d->t->pokeball_ouvert, d->i->p_w * 40, (d->i->p_h + 2) * 40);
	}
}

void	capture_finale(t_data *d)
{
	int	i;

	i = -1;
	while (++i < 10000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pokeball_left, d->i->pat_w * 40, d->i->pat_h * 40);
	while (i++ < 20000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pokeball_right, d->i->pat_w * 40, d->i->pat_h * 40);
	while (i++ < 30000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pokeball_left, d->i->pat_w * 40, d->i->pat_h * 40);
	while (i++ < 40000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pokeball_right, d->i->pat_w * 40, d->i->pat_h * 40);
	while (i++ < 50000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pokeball_left, d->i->pat_w * 40, d->i->pat_h * 40);
	while (i++ < 60000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pokeball_right, d->i->pat_w * 40, d->i->pat_h * 40);
}

int	record_k(int keycode, t_data *d)
{
	if (keycode == ESC)
	{
		close_clean(d);
		exit(0);
	}
	if (keycode == V)
	{
		if ((d->i->p_w == d->i->pat_w + 2 && d->i->p_h == d->i->pat_h)
			|| (d->i->p_w == d->i->pat_w - 2 && d->i->p_h == d->i->pat_h)
			|| (d->i->p_w == d->i->pat_w && d->i->p_h == d->i->pat_h + 2)
			|| (d->i->p_w == d->i->pat_w && d->i->p_h == d->i->pat_h - 2))
		{
			lancer_pokeball(d);
			lancer_pokeball_2(d);
			lancer_pokeball_3(d);
			capture_finale(d);
			d->tab[d->i->pat_h][d->i->pat_w] = '0';
			d->i->pat_h = -3;
		}
	}
	return (1);
}
