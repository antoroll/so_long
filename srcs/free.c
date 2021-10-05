/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:23:35 by arolland          #+#    #+#             */
/*   Updated: 2021/08/23 18:29:04 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**free_tab(t_data *data, char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	close_checks(data);
	return (NULL);
}

void	free_all(t_data *data)
{
	int	i;

	i = 0;
	while (data->tab[i])
	{
		free(data->tab[i]);
		i++;
	}
	free(data->tab);
}

void	close_clean(t_data *d)
{
	if (d->affichage)
		free(d->affichage);
	if (d->t)
	{
		free_img(d);
		free_img2(d);
		free_img3(d);
		free(d->t);
	}
	if (d->i)
		free(d->i);
	if (d->tab)
		free_all(d);
	if (d->mlx_win)
		mlx_destroy_window(d->mlx, d->mlx_win);
	if (d->mlx)
	{
		mlx_destroy_display(d->mlx);
		free(d->mlx);
	}
}

void	close_checks(t_data *d)
{
	if (d->i)
		free(d->i);
	if (d->t)
		free(d->t);
	if (d->tab)
		free_all(d);
}
