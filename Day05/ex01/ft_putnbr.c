/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 02:32:21 by julin             #+#    #+#             */
/*   Updated: 2017/08/13 02:37:38 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int address;

	address = 0;
	while (str[address] != '\0')
	{
		ft_putchar(str[address]);
		address++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else
	{
		if (nb < 0 && nb != -2147483648)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb <= 9)
		{
			ft_putchar(nb + 48);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + 48);
		}
	}
}
