/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 08:53:20 by julin             #+#    #+#             */
/*   Updated: 2017/08/16 15:25:05 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		diff;
	int		address;
	int		*ran;

	address = 0;
	diff = max - min;
	if (min >= max)
		return (0);
	if (!(ran = (int*)malloc(sizeof(ran) * diff)))
		return (ran);
	while (min != max)
	{
		ran[address] = min;
		address++;
		min++;
	}
	ran[address] = '\0';
	return (ran);
}
