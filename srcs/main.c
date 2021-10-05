/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:14:25 by arolland          #+#    #+#             */
/*   Updated: 2021/08/24 14:24:44 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	main(int argc, char **argv)
{
	t_data	d[1];

	if (argc == 2)
	{
		check_extension(argv[1]);
		init_game(d);
		init_dimensions(d, argv[1]);
		init_tab(d, argv[1], -1, 0);
		checks(d);
		d->mlx = mlx_init();
		d->mlx_win = mlx_new_window(d->mlx, d->i->w * 40,
				d->i->h * 40, "Hello world!");
		put_textures(d, 0, 0);
		mlx_loop_hook(d->mlx, string, d);
		mlx_hook(d->mlx_win, 2, 1L << 0, record_keys, d);
		mlx_hook(d->mlx_win, 3, 1L << 1, record_k, d);
		mlx_hook(d->mlx_win, 17, 0, close_window_red_cross, d);
		mlx_hook(d->mlx_win, 12, 1L << 15, display_map_hook, d);
		mlx_loop(d->mlx);
	}
	else
		ft_putstr_fd("Error\nWrong number of arguments.", 2);
	return (0);
}
