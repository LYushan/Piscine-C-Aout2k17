/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 10:12:25 by julin             #+#    #+#             */
/*   Updated: 2017/08/13 10:17:54 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	address;

	address = 0;
	while (s1[address] != '\0' && address < n)
	{
		if (s1[address] != s2[address])
			return (s1[address] - s2[address]);
		address++;
	}
	if (s2[address] != '\0' && address < n)
		return (s1[address] - s2[address]);
	return (0);
}
