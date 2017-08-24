/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 09:23:35 by julin             #+#    #+#             */
/*   Updated: 2017/08/17 19:31:09 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		address;

	address = 0;
	while (str[address] != '\0')
		++address;
	return (address);
}

int			ft_strcat(char *dest, char *src, int address2)
{
	int		address;

	address = -1;
	while (src[++address])
		dest[address + address2] = src[address];
	dest[address + address2] = '\n';
	dest[address + address2 + 1] = '\0';
	return (address + address2 + 1);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		address;
	int		length;
	char	*res;

	length = 0;
	address = 0;
	while (++address < argc)
		length = length + ft_strlen(argv[address]) + 1;
	if (length == 0)
		++length;
	if (!(res = (char *)malloc(sizeof(char) * length)))
		return (res);
	address = 0;
	length = 0;
	while (++address < argc)
		length = ft_strcat(res, argv[address], length);
	res[length - 1] = '\0';
	return (res);
}
