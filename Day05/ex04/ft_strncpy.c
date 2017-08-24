/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 02:47:30 by julin             #+#    #+#             */
/*   Updated: 2017/08/13 02:50:55 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	address;

	address = 0;
	while (src[address] != '\0' && address < n)
	{
		dest[address] = src[address];
		address++;
	}
	while (address < n)
	{
		dest[address] = '\0';
		address++;
	}
	return (dest);
}
