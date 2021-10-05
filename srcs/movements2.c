/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:05:29 by arolland          #+#    #+#             */
/*   Updated: 2021/08/24 15:07:38 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	player_go_up2(t_data *d, int i)
{
	if (d->tab[d->i->p_h - 1][d->i->p_w] == 'C')
		d->flag++;
	d->tab[d->i->p_h - 1][d->i->p_w] = 'P';
	d->tab[d->i->p_h][d->i->p_w] = '0';
	mlx_put_image_to_window(d->mlx, d->mlx_win,
		d->t->herbe, d->i->p_w * 40, (d->i->p_h - 1) * 40);
	while (++i < 1000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_up1, d->i->p_w * 40, (d->i->p_h) * 40);
	while (i++ < 2000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_up2, d->i->p_w * 40, (d->i->p_h) * 40);
	while (i++ < 3000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_up3, d->i->p_w * 40, (d->i->p_h - 1) * 40);
	mlx_put_image_to_window(d->mlx, d->mlx_win,
		d->t->herbe, d->i->p_w * 40, d->i->p_h * 40);
	if (d->i->flag == 1)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pat_down1, d->i->pat_w * 40, d->i->pat_h * 40);
	printf("Vous avez fait %d pas.\n", d->count++);
	d->i->p_h -= 1;
	mlx_put_image_to_window(d->mlx, d->mlx_win, d->t->tree,
		(d->i->w - 2) * 40, (d->i->h - 1) * 40);
}

void	player_go_left2(t_data *d, int i)
{
	if (d->tab[d->i->p_h][d->i->p_w - 1] == 'C')
		d->flag++;
	d->tab[d->i->p_h][d->i->p_w - 1] = 'P';
	d->tab[d->i->p_h][d->i->p_w] = '0';
	mlx_put_image_to_window(d->mlx, d->mlx_win,
		d->t->herbe, (d->i->p_w - 1) * 40, d->i->p_h * 40);
	while (++i < 1000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_left1, (d->i->p_w) * 40, d->i->p_h * 40);
	while (i++ < 2000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_left2, (d->i->p_w) * 40, d->i->p_h * 40);
	while (i++ < 3000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_left3, (d->i->p_w - 1) * 40, d->i->p_h * 40);
	mlx_put_image_to_window(d->mlx, d->mlx_win,
		d->t->herbe, d->i->p_w * 40, d->i->p_h * 40);
	if (d->i->flag == 1)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pat_right1, d->i->pat_w * 40, d->i->pat_h * 40);
	printf("Vouz avez fait %d pas.\n", d->count++);
	d->i->p_w -= 1;
	mlx_put_image_to_window(d->mlx, d->mlx_win, d->t->tree,
		(d->i->w - 2) * 40, (d->i->h - 1) * 40);
}

void	player_go_down2(t_data *d, int i)
{
	if (d->tab[d->i->p_h + 1][d->i->p_w] == 'C')
		d->flag++;
	d->tab[d->i->p_h + 1][d->i->p_w] = 'P';
	d->tab[d->i->p_h][d->i->p_w] = '0';
	mlx_put_image_to_window(d->mlx, d->mlx_win,
		d->t->herbe, d->i->p_w * 40, (d->i->p_h + 1) * 40);
	while (++i < 1000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_down1, d->i->p_w * 40, (d->i->p_h) * 40);
	while (i++ < 2000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_down2, d->i->p_w * 40, (d->i->p_h) * 40);
	while (i++ < 3000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_down3, d->i->p_w * 40, (d->i->p_h + 1) * 40);
	mlx_put_image_to_window(d->mlx, d->mlx_win,
		d->t->herbe, d->i->p_w * 40, d->i->p_h * 40);
	if (d->i->flag == 1)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pat_up1, d->i->pat_w * 40, d->i->pat_h * 40);
	printf("Vous avez fait %d pas.\n", d->count++);
	d->i->p_h += 1;
	mlx_put_image_to_window(d->mlx, d->mlx_win, d->t->tree,
		(d->i->w - 2) * 40, (d->i->h - 1) * 40);
}

void	player_go_right2(t_data *d, int i)
{
	if (d->tab[d->i->p_h][d->i->p_w + 1] == 'C')
		d->flag++;
	d->tab[d->i->p_h][d->i->p_w + 1] = 'P';
	d->tab[d->i->p_h][d->i->p_w] = '0';
	mlx_put_image_to_window(d->mlx, d->mlx_win,
		d->t->herbe, (d->i->p_w + 1) * 40, d->i->p_h * 40);
	while (++i < 1000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_right1, (d->i->p_w) * 40, d->i->p_h * 40);
	while (i++ < 2000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_right2, (d->i->p_w) * 40, d->i->p_h * 40);
	while (i++ < 3000)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->player_right3, (d->i->p_w + 1) * 40, d->i->p_h * 40);
	mlx_put_image_to_window(d->mlx, d->mlx_win,
		d->t->herbe, d->i->p_w * 40, d->i->p_h * 40);
	if (d->i->flag == 1)
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pat_left1, d->i->pat_w * 40, d->i->pat_h * 40);
	printf("Vous avez fait %d pas.\n", d->count++);
	d->i->p_w += 1;
	mlx_put_image_to_window(d->mlx, d->mlx_win, d->t->tree,
		(d->i->w - 2) * 40, (d->i->h - 1) * 40);
}
