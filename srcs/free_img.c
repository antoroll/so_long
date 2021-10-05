/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:16:53 by arolland          #+#    #+#             */
/*   Updated: 2021/08/23 17:57:54 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_img(t_data *d)
{
	if (d->t->player_down3)
		mlx_destroy_image(d->mlx, d->t->player_down3);
	if (d->t->player_left1)
		mlx_destroy_image(d->mlx, d->t->player_left1);
	if (d->t->player_left2)
		mlx_destroy_image(d->mlx, d->t->player_left2);
	if (d->t->player_left3)
		mlx_destroy_image(d->mlx, d->t->player_left3);
	if (d->t->player_right1)
		mlx_destroy_image(d->mlx, d->t->player_right1);
	if (d->t->player_right2)
		mlx_destroy_image(d->mlx, d->t->player_right2);
	if (d->t->player_right3)
		mlx_destroy_image(d->mlx, d->t->player_right3);
	if (d->t->player_up1)
		mlx_destroy_image(d->mlx, d->t->player_up1);
	if (d->t->player_up2)
		mlx_destroy_image(d->mlx, d->t->player_up2);
	if (d->t->player_up3)
		mlx_destroy_image(d->mlx, d->t->player_up3);
	if (d->t->pokeball)
		mlx_destroy_image(d->mlx, d->t->pokeball);
	if (d->t->pokeball_left)
		mlx_destroy_image(d->mlx, d->t->pokeball_left);
}

void	free_img2(t_data *d)
{
	if (d->t->tree)
		mlx_destroy_image(d->mlx, d->t->tree);
	if (d->t->herbe)
		mlx_destroy_image(d->mlx, d->t->herbe);
	if (d->t->lancer1)
		mlx_destroy_image(d->mlx, d->t->lancer1);
	if (d->t->lancer2)
		mlx_destroy_image(d->mlx, d->t->lancer2);
	if (d->t->lancer3)
		mlx_destroy_image(d->mlx, d->t->lancer3);
	if (d->t->lancer4)
		mlx_destroy_image(d->mlx, d->t->lancer4);
	if (d->t->mcdo)
		mlx_destroy_image(d->mlx, d->t->mcdo);
	if (d->t->pat_down1)
		mlx_destroy_image(d->mlx, d->t->pat_down1);
	if (d->t->pat_left1)
		mlx_destroy_image(d->mlx, d->t->pat_left1);
	if (d->t->pat_right1)
		mlx_destroy_image(d->mlx, d->t->pat_right1);
	if (d->t->pat_up1)
		mlx_destroy_image(d->mlx, d->t->pat_up1);
	if (d->t->player_down1)
		mlx_destroy_image(d->mlx, d->t->player_down1);
}

void	free_img3(t_data *d)
{
	if (d->t->pokeball_right)
		mlx_destroy_image(d->mlx, d->t->pokeball_right);
	if (d->t->pokeball_ouvert)
		mlx_destroy_image(d->mlx, d->t->pokeball_ouvert);
	if (d->t->player_down2)
		mlx_destroy_image(d->mlx, d->t->player_down2);
}
