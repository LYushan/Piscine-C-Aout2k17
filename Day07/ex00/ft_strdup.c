/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 08:05:21 by julin             #+#    #+#             */
/*   Updated: 2017/08/17 19:49:19 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		address;
	char	*dest;

	address = 0;
	while (src[address] != '\0')
		address++;
	dest = malloc(address * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	address = 0;
	while (src[address] != '\0')
	{
		dest[address] = src[address];
		address++;
	}
	dest[address] = '\0';
	return (dest);
}
