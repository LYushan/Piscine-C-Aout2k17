/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 09:15:01 by julin             #+#    #+#             */
/*   Updated: 2017/08/20 16:46:27 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "outils.h"
#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar((char)nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int			ft_atoi(char *str)
{
	int		ret;
	int		sign;

	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	ret = 0;
	while (*str && ('0' <= *str && *str <= '9'))
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (ret * sign);
}

int			ft_strlen_sans_whitespaces(char *str)
{
	int		len;

	len = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
			len++;
		str++;
	}
	return (1);
}

char		*supprime_whitespaces(char *str)
{
	char	*ret;
	int		size;
	int		i;
	int		j;

	size = ft_strlen_sans_whitespaces(str);
	ret = (char*)malloc(sizeof(char) * (size + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			ret[j++] = str[i++];
		else
			i++;
	}
	ret[j] = '\0';
	return (ret);
}
