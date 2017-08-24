/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 10:58:37 by julin             #+#    #+#             */
/*   Updated: 2017/08/13 11:04:15 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		i;
	int		j;
	int		resultat;

	i = 0;
	j = 0;
	resultat = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (*str == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultat *= 10;
		resultat += str[i] - 48;
		i++;
	}
	if (j)
		return (-resultat);
	else
		return (resultat);
}
