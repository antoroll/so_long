/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:20:18 by arolland          #+#    #+#             */
/*   Updated: 2021/08/23 12:54:06 by arolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	nbrlen(long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	long	nb;
	size_t	len;

	nb = n;
	len = nbrlen(n);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len--] = 0;
	if (n == 0)
		ret[0] = '0';
	if (nb < 0)
	{
		ret[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		ret[len--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (ret);
}
