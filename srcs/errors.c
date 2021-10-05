/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:25:54 by arolland          #+#    #+#             */
/*   Updated: 2021/08/23 18:07:43 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	error_message_invalid_map(t_data *data)
{
	ft_putstr_fd("Error\nInvalid map.\n", 2);
	close_checks(data);
	exit(0);
}

void	error_lines(t_data *d)
{
	ft_putstr_fd("Error\nThe map is not rectangular.\n", 2);
	if (d->i)
		free(d->i);
	if (d->t)
		free(d->t);
	exit(0);
}

void	allow_exit(t_data *data)
{
	printf("Congratulations! You've deserved some rest in the Mcdokemon!\n");
	close_clean(data);
	exit(0);
}

int	close_window_red_cross(t_data *data)
{
	close_clean(data);
	exit(0);
}

void	you_died(t_data *d)
{
	if ((d->i->pat_w == d->i->p_w) && (d->i->pat_h == d->i->p_h))
	{
		mlx_put_image_to_window(d->mlx, d->mlx_win,
			d->t->pat_down1, d->i->p_w * 40, d->i->p_h * 40);
		printf("Team Rocket won, once again! MUAHAHAHAHA\n");
		close_clean(d);
		exit(0);
	}
}
