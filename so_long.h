/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:45:20 by arolland          #+#    #+#             */
/*   Updated: 2021/08/24 15:02:06 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SO_LONG_H

# define SO_LONG_H
# include "./mlx_linux/mlx.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# define A 97
# define W 119
# define D 100
# define S 115
# define V 118
# define ESC 65307

typedef struct s_img {
	int		w;
	int		h;
	int		p_w;
	int		p_h;
	int		pat_w;
	int		pat_h;
	int		i;
	int		flag;
}				t_img;

typedef struct s_textures {
	void	*tree;
	void	*indiana;
	void	*pomme;
	void	*star;
	void	*herbe;
	void	*lancer1;
	void	*lancer2;
	void	*lancer3;
	void	*lancer4;
	void	*mcdo;
	void	*pat_down1;
	void	*pat_down2;
	void	*pat_down3;
	void	*pat_left1;
	void	*pat_left2;
	void	*pat_left3;
	void	*pat_right1;
	void	*pat_right2;
	void	*pat_right3;
	void	*pat_up1;
	void	*pat_up2;
	void	*pat_up3;
	void	*player_down1;
	void	*player_down2;
	void	*player_down3;
	void	*player_left1;
	void	*player_left2;
	void	*player_left3;
	void	*player_right1;
	void	*player_right2;
	void	*player_right3;
	void	*player_up1;
	void	*player_up2;
	void	*player_up3;
	void	*pokeball;
	void	*pokeball_left;
	void	*pokeball_right;
	void	*pokeball_open;
	void	*pokeball_ouvert;
	void	*flash_up;
	void	*flash_left;
	void	*flash_right;
	void	*flash_down;
	int		i;
}				t_textures;

typedef struct s_data {
	void			*mlx;
	void			*mlx_win;
	char			*argv;
	char			**tab;
	int				flag;
	int				check;
	unsigned int	count;
	int				k;
	int				j;
	char			*affichage;
	t_img			*i;
	t_textures		*t;
}				t_data;

void	init_game(t_data *data);
void	init_struct(t_data *data);
void	init_dimensions(t_data *data, char *argv);
char	**init_tab(t_data *data, char *argv, int j, int fd);
void	checks(t_data *data);
void	check_walls(t_data *data);
void	check_map_size(t_data *data);
void	check_extension(char *argv);
void	put_textures(t_data *data, int w, int h);
int		record_keys(int keycode, t_data *data);
void	close_clean(t_data *data);
char	**free_tab(t_data *data, char **str);
void	free_all(t_data *data);
void	allow_exit(t_data *data);
void	check_fd(t_data *data, int fd);
void	close_checks(t_data *data);
void	error_lines(t_data *d);
void	you_died(t_data *data);
int		record_k(int keycode, t_data *data);
int		close_window_red_cross(t_data *data);
void	error_message_invalid_map(t_data *data);
int		get_next_line(int fd, char **line, int ret);
void	ft_putstr_fd(char *s, int fd);
int		ft_strlen(char *s);
int		display_map_hook(t_data *data);
void	free_img(t_data *d);
void	free_img2(t_data *d);
void	free_img3(t_data *d);
void	init_textures(t_data *data);
void	init_textures2(t_data *data);
void	init_textures3(t_data *data);
void	player_go_up2(t_data *d, int i);
void	player_go_left2(t_data *d, int i);
void	player_go_down2(t_data *d, int i);
void	player_go_right2(t_data *d, int i);
char	*ft_itoa(int n);
int		string(t_data *data);

#endif
