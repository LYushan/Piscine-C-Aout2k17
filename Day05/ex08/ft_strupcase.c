/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 10:19:01 by julin             #+#    #+#             */
/*   Updated: 2017/08/13 10:22:05 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		address;

	address = 0;
	while (str[address] != '\0')
	{
		if (str[address] > 96 && str[address] < 123)
			str[address] = str[address] - 32;
		address++;
	}
	return (str);
}
