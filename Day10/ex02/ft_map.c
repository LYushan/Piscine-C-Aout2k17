/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 02:50:57 by julin             #+#    #+#             */
/*   Updated: 2017/08/23 21:35:58 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		address;
	int		*resultat;

	address = 0;
	if (!(resultat = (int*)malloc(sizeof(int) * length)))
		return (NULL);
	while (address < length)
	{
		resultat[address] = f(tab[address]);
		address++;
	}
	return (resultat);
}
