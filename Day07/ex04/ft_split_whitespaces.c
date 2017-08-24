/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 22:39:10 by julin             #+#    #+#             */
/*   Updated: 2017/08/19 23:51:07 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nb_words(char *s)
{
	int		nb_words;
	int		a;

	nb_words = 0;
	a = 0;
	if (!s)
		return (0);
	while (s[a] != '\0')
	{
		while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
			a++;
		if (s[a] >= 33 && s[a] <= 126)
			nb_words++;
		while (s[a] != ' ' && s[a] != '\n' && s[a] != '\t' && s[a] != '\0')
			a++;
	}
	return (nb_words);
}

int		ft_nb_letters(char *str)
{
	int		nb;

	nb = 0;
	while (str[nb] != '\t' && str[nb] != ' ' && str[nb] != '\n' && str[nb])
		nb++;
	return (nb);
}

void	ft_copy(char *src, char *dest, int length)
{
	int		a;

	a = -1;
	while (++a < length)
		dest[a] = src[a];
	dest[a] = '\0';
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		words;
	int		a;
	int		b;
	int		c;

	words = ft_nb_words(str);
	if (!(tab = (char **)malloc(sizeof(char *) * words + 1)))
		return (NULL);
	a = 0;
	c = -1;
	while (++c < words)
	{
		while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n')
			a++;
		b = ft_nb_letters(str + a);
		if (!(tab[c] = (char*)malloc(sizeof(*tab) * (b + 1))))
			return (NULL);
		ft_copy(str + a, tab[c], b);
		a = a + b;
	}
	tab[c] = 0;
	return (tab);
}
