/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:07:55 by julin             #+#    #+#             */
/*   Updated: 2017/08/17 19:39:48 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		address;

	address = 0;
	while (str[address] != '\0')
	{
		ft_putchar(str[address]);
		address++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != '\0')
	{
		ft_putstr(tab[i]);
		i++;
		ft_putchar('\n');
	}
}
