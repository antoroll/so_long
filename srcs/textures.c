/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:39:05 by arolland          #+#    #+#             */
/*   Updated: 2021/08/24 14:48:08 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	load_textures(t_data *d, int j, int w, int h)
{
	if (d->tab[d->t->i][j] == '1')
		mlx_put_image_to_window(d->mlx, d->mlx_win, d->t->tree, w * 40, h * 40);
	else if (d->tab[d->t->i][j] == 'P')
	{
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_down1, w * 40, h * 40);
		d->i->p_w = w;
		d->i->p_h = h;
	}
	else if (d->tab[d->t->i][j] == 'C')
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pokeball, w * 40, h * 40);
	else if (d->tab[d->t->i][j] == 'E')
		mlx_put_image_to_window(d->mlx, d->mlx_win, d->t->mcdo, w * 40, h * 40);
	else if (d->tab[d->t->i][j] == '0')
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->herbe, w * 40, h * 40);
	else if (d->tab[d->t->i][j] == 'N')
	{
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pat_down1, w * 40, h * 40);
		d->i->pat_w = w;
		d->i->pat_h = h;
	}
}

void	put_textures(t_data *data, int w, int h)
{
	int	j;

	init_textures(data);
	init_textures2(data);
	init_textures3(data);
	while (++data->t->i < data->i->h)
	{
		j = -1;
		w = 0;
		while (++j < data->i->w)
		{
			load_textures(data, j, w, h);
			w++;
		}
		h++;
	}
}

int	display_map_hook(t_data *data)
{
	int	j;
	int	w;
	int	h;

	h = 0;
	data->t->i = -1;
	while (++data->t->i < data->i->h)
	{
		j = -1;
		w = 0;
		while (++j < data->i->w)
		{
			load_textures(data, j, w, h);
			w++;
		}
		h++;
	}
	return (1);
}
