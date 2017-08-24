/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 09:12:45 by julin             #+#    #+#             */
/*   Updated: 2017/08/16 15:19:33 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		diff;
	int		address;

	address = 0;
	diff = max - min;
	range[0] = NULL;
	if (min >= max)
		return (0);
	if (!(range[0] = (int*)malloc(sizeof(range[0]) * diff)))
		return (0);
	while (min != max)
		range[0][address++] = min++;
	return (diff);
}
