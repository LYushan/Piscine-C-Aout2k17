/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 03:06:33 by julin             #+#    #+#             */
/*   Updated: 2017/08/14 07:40:13 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	*ft_strlowcase(char *str)
{
	int		address;

	address = 0;
	while (str[address] != '\0')
	{
		if (str[address] < 91 && str[address] > 64)
			str[address] = str[address] + 32;
		address++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		address;
	int		address2;

	address = 0;
	ft_strlowcase(str);
	while (str[address] != '\0')
	{
		address2 = address - 1;
		if (str[address] < 123 && str[address] > 96)
		{
			if (address == 0 || str[address2] < 48)
				str[address] = str[address] - 32;
			if (str[address2] > 57 && str[address2] < 65)
				str[address] = str[address] - 32;
			if (str[address2] > 90 && str[address2] < 97)
				str[address] = str[address] - 32;
			if (str[address2] > 122)
				str[address] = str[address] - 32;
		}
		address++;
	}
	return (str);
}
