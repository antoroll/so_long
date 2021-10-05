/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:20:14 by arolland          #+#    #+#             */
/*   Updated: 2021/09/16 16:47:28 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	get_next_line(int fd, char **line, int ret)
{
	int		i;
	char	buf;

	ret = 1;
	if (!line)
		return (-1);
	*line = malloc(1234567);
	**line = 0;
	i = 0;
	buf = 0;
	while (ret > 0)
	{
		ret = read(fd, &buf, 1);
		if (buf == '\n')
			break ;
		else if (buf == '\0')
			break ;
		(*line)[i] = buf;
		buf = 0;
		i++;
	}
	(*line)[i] = 0;
	if (ret == -1)
		**line = 0;
	return (ret);
}
