/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:30:24 by julin             #+#    #+#             */
/*   Updated: 2017/08/13 02:53:00 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	address;
	int	address2;
	int	size;

	address = 0;
	size = 0;
	while (to_find[size] != '\0')
		size++;
	if (size == 0)
		return (str);
	while (str[address] != '\0')
	{
		address2 = 0;
		while (str[address + address2] == to_find[address2])
		{
			if (address2 == size - 1)
				return (str + address);
			address2++;
		}
		address++;
	}
	return (0);
}
