/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 03:17:43 by julin             #+#    #+#             */
/*   Updated: 2017/08/15 09:27:06 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int address;

	address = 0;
	while (str[address] != '\0')
	{
		if (str[address] < 65)
			return (0);
		if (str[address] > 90 && str[address] < 97)
			return (0);
		if (str[address] > 122)
			return (0);
		address++;
	}
	return (1);
}
