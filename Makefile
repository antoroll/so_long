# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arolland <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/08 15:13:08 by arolland          #+#    #+#              #
#    Updated: 2021/08/23 18:32:53 by arolland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./srcs/checks_1.c \
		./srcs/checks_2.c \
		./srcs/errors.c \
		./srcs/free.c \
		./srcs/free_imgs.c \
		./srcs/init.c \
		./srcs/textures.c \
		./srcs/textures2.c \
		./srcs/utils.c \
		./srcs/movements.c \
		./srcs/movements2.c \
		./srcs/main.c \
		./srcs/get_next_line.c \
		./srcs/lancer_pokeball.c \
		./srcs/string.c

OBJS 		= ${SRCS:.c=.o}

PATH_MLX	= mlx_linux
CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
NAME		= so_long
FLAGS		= -g -Lmlx_linux -lmlx_linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
all: 		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): 	$(OBJS)
			make -C $(PATH_MLX)
			${CC} $(CFLAGS) -o $(NAME) $(OBJS) $(FLAGS)

bonus:		all

clean:
			make -C $(PATH_MLX) clean
			${RM} ${OBJS}

fclean: 	clean
			make -C $(PATH_MLX) clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		bonus all clean fclean re
