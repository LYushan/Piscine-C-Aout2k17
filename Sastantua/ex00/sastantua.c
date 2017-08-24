/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 22:34:14 by julin             #+#    #+#             */
/*   Updated: 2017/08/06 04:17:09 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_lenght_base(int size)
{
	int floor;
	int width;
	int floor_step;

	floor = 1;
	width = 1;
	floor_step = 4;
	while (floor <= size)
	{
		width += 2 * (2 + floor);
		floor++;
		width += floor_step;
		if (floor % 2 && floor < size)
			floor_step += 2;
	}
	width -= floor_step;
	return (width);
}

void	ft_put_line(int espace)
{
	int adress;

	adress = 0;
	while (adress < espace)
	{
		ft_putchar(' ');
		adress++;
	}
}

void	ft_put_block(int i, int j, int k, int l)
{
	int	m;
	int n;

	m = 1 + 2 * ((j - 1) / 2);
	n = 0;
	while (n < k)
	{
		if (n == 0)
			ft_putchar('/');
		else if (n == k - 1)
			ft_putchar('\\');
		else
		{
			if (j == i && n >= (k - m) / 2 && n < (k + m) / 2 && 2 + j - l <= m)
				if (m >= 5 && l == 2 + j - m / 2 - 1 && n == (k + m) / 2 - 2)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
		n++;
	}
}

void	sastantua(int size)
{
	int		floor;
	int		height;
	int		step;
	int		width;

	if (size < 1)
		return ;
	floor = 1;
	width = 1;
	while (floor <= size)
	{
		height = 2 + floor;
		step = 0;
		while (step < height)
		{
			width += 2;
			ft_put_line((ft_lenght_base(size) - width) / 2);
			ft_put_block(size, floor, width, step);
			ft_putchar('\n');
			step++;
		}
		floor++;
		width += 4 + 2 * ((floor - 2) / 2);
	}
}
