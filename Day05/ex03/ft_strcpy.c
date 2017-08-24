/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 02:38:44 by julin             #+#    #+#             */
/*   Updated: 2017/08/13 02:54:13 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		address;

	address = 0;
	while (src[address] != '\0')
	{
		dest[address] = src[address];
		address++;
	}
	dest[address] = '\0';
	return (dest);
}
