/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgirland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 13:32:34 by pgirland          #+#    #+#             */
/*   Updated: 2017/08/06 04:36:09 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_o_to_o1(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('/');
			if (i == x)
				ft_putchar('\n');
		}
		else if (i == x)
		{
			ft_putchar(92);
			ft_putchar('\n');
		}
		else
			ft_putchar('*');
		i++;
	}
}

void	ft_o_to_o2(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(92);
			if (i == x)
				ft_putchar('\n');
		}
		else if (i == x)
		{
			ft_putchar('/');
			ft_putchar('\n');
		}
		else
			ft_putchar('*');
		i++;
	}
}

void	ft_o_down_o(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('*');
			if (i == x)
				ft_putchar('\n');
		}
		else if (i == x)
		{
			ft_putchar('*');
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
				ft_o_to_o1(x);
			else if (i == y)
				ft_o_to_o2(x);
			else
				ft_o_down_o(x);
			i++;
		}
	}
}
