/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgirland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 11:00:55 by pgirland          #+#    #+#             */
/*   Updated: 2017/08/06 04:34:59 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	o_to_o(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('o');
			if (i == x)
				ft_putchar('\n');
		}
		else if (i == x)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
		else
			ft_putchar('-');
		i++;
	}
}

void	o_down_o(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('|');
			if (i == x)
				ft_putchar('\n');
		}
		else if (i == x)
		{
			ft_putchar('|');
			ft_putchar('\n');
		}
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
				o_to_o(x);
			else if (i == y)
				o_to_o(x);
			else
				o_down_o(x);
			i++;
		}
	}
}
