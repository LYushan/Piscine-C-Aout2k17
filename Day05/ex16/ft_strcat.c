/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 03:32:34 by julin             #+#    #+#             */
/*   Updated: 2017/08/14 07:46:28 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		address;
	int		address2;

	address = 0;
	address2 = 0;
	while (dest[address] != '\0')
		address++;
	while (dest[address2] != '\0')
	{
		dest[address] = src[address2];
		address++;
		address2++;
	}
	dest[address] = '\0';
	return (dest);
}
