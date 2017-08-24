/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 08:39:57 by julin             #+#    #+#             */
/*   Updated: 2017/08/12 08:46:25 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		address;

	address = 0;
	while (s1[address] != '\0')
	{
		if (s1[address] != s2[address])
			return (s1[address] - s2[address]);
		address++;
	}
	if (s2[address] != '\0')
		return (s1[address] - s2[address]);
	return (0);
}
