/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 04:54:26 by julin             #+#    #+#             */
/*   Updated: 2017/08/23 21:35:35 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		a;

	a = 0;
	while (tab[a] == tab[a + 1])
		a++;
	if (tab[a] < tab[a + 1])
		while (a + 1 < length)
		{
			if (f(tab[a], tab[a + 1]) > 0)
				return (0);
			a++;
		}
	if (tab[a] > tab[a + 1])
		while (a + 1 < length)
		{
			if (f(tab[a], tab[a + 1]) < 0)
				return (0);
			a++;
		}
	return (1);
}
