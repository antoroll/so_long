/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:19:06 by arolland          #+#    #+#             */
/*   Updated: 2021/08/24 15:14:03 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	string(t_data *d)
{
	free(d->affichage);
	d->affichage = ft_itoa(d->count - 1);
	mlx_string_put(d->mlx, d->mlx_win, (d->i->w - 2) * 40,
		d->i->h * 40, 255, d->affichage);
	mlx_string_put(d->mlx, d->mlx_win, (d->i->w - 1) * 40,
		d->i->h * 40, 255, "PAS.");
	return (1);
}
