/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 04:44:02 by julin             #+#    #+#             */
/*   Updated: 2017/08/16 23:15:34 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

struct s_stock_par		*ft_param_to_tab(int ac, char **av);
void					ft_show_tab(struct s_stock_par *par);
char					**ft_split_whitespaces(char *str);
void					ft_putchar(char c);

typedef struct			s_stock_par
{
	int					size_param;
	char				*str;
	char				*copy;
	char				**tab;
}						t_stock_par;

#endif
