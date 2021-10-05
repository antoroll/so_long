/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:30:39 by arolland          #+#    #+#             */
/*   Updated: 2021/08/23 18:43:34 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_textures(t_data *d)
{
	t_img	*u;
	t_img	autre;

	u = &autre;
	d->t->tree = mlx_xpm_file_to_image(d->mlx,
			"images/tree.xpm", &u->w, &u->h);
	d->t->herbe = mlx_xpm_file_to_image(d->mlx,
			"images/herbe.xpm", &u->w, &u->h);
	d->t->lancer1 = mlx_xpm_file_to_image(d->mlx,
			"images/lancer1.xpm", &u->w, &u->h);
	d->t->lancer2 = mlx_xpm_file_to_image(d->mlx,
			"images/lancer2.xpm", &u->w, &u->h);
	d->t->lancer3 = mlx_xpm_file_to_image(d->mlx,
			"images/lancer3.xpm", &u->w, &u->h);
	d->t->lancer4 = mlx_xpm_file_to_image(d->mlx,
			"images/lancer4.xpm", &u->w, &u->h);
	d->t->mcdo = mlx_xpm_file_to_image(d->mlx,
			"images/mcdo.xpm", &u->w, &u->h);
	d->t->pat_down1 = mlx_xpm_file_to_image(d->mlx,
			"images/pat_down1.xpm", &u->w, &u->h);
	d->t->pat_left1 = mlx_xpm_file_to_image(d->mlx,
			"images/pat_left1.xpm", &u->w, &u->h);
}

void	init_textures2(t_data *d)
{
	t_img	*u;
	t_img	autre;

	u = &autre;
	d->t->pat_up1 = mlx_xpm_file_to_image(d->mlx,
			"images/pat_up1.xpm", &u->w, &u->h);
	d->t->player_down1 = mlx_xpm_file_to_image(d->mlx,
			"images/player_down1.xpm", &u->w, &u->h);
	d->t->player_down2 = mlx_xpm_file_to_image(d->mlx,
			"images/player_down2.xpm", &u->w, &u->h);
	d->t->player_down3 = mlx_xpm_file_to_image(d->mlx,
			"images/player_down3.xpm", &u->w, &u->h);
	d->t->player_left1 = mlx_xpm_file_to_image(d->mlx,
			"images/player_left1.xpm", &u->w, &u->h);
	d->t->player_left2 = mlx_xpm_file_to_image(d->mlx,
			"images/player_left2.xpm", &u->w, &u->h);
	d->t->player_left3 = mlx_xpm_file_to_image(d->mlx,
			"images/player_left3.xpm", &u->w, &u->h);
	d->t->player_right1 = mlx_xpm_file_to_image(d->mlx,
			"images/player_right1.xpm", &u->w, &u->h);
	d->t->player_right2 = mlx_xpm_file_to_image(d->mlx,
			"images/player_right2.xpm", &u->w, &u->h);
	d->t->player_right3 = mlx_xpm_file_to_image(d->mlx,
			"images/player_right3.xpm", &u->w, &u->h);
}

void	init_textures3(t_data *d)
{
	t_img	*u;
	t_img	autre;

	u = &autre;
	d->t->player_up1 = mlx_xpm_file_to_image(d->mlx,
			"images/player_up1.xpm", &u->w, &u->h);
	d->t->player_up2 = mlx_xpm_file_to_image(d->mlx,
			"images/player_up2.xpm", &u->w, &u->h);
	d->t->pat_right1 = mlx_xpm_file_to_image(d->mlx,
			"images/pat_right1.xpm", &u->w, &u->h);
	d->t->player_up3 = mlx_xpm_file_to_image(d->mlx,
			"images/player_up3.xpm", &u->w, &u->h);
	d->t->pokeball = mlx_xpm_file_to_image(d->mlx,
			"images/pokeball.xpm", &u->w, &u->h);
	d->t->pokeball_left = mlx_xpm_file_to_image(d->mlx,
			"images/pokeball_left.xpm", &u->w, &u->h);
	d->t->pokeball_right = mlx_xpm_file_to_image(d->mlx,
			"images/pokeball_right.xpm", &u->w, &u->h);
	d->t->pokeball_ouvert = mlx_xpm_file_to_image(d->mlx,
			"images/pokeball_ouvert.xpm", &u->w, &u->h);
}
