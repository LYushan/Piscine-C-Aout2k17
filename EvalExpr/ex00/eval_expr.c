/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 09:35:32 by julin             #+#    #+#             */
/*   Updated: 2017/08/20 16:46:06 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include "outils.h"
#include <stdlib.h>

int			eval_expr2(char **str)
{
	int		result;
	char	*s;

	s = *str;
	result = 0;
	if (*s == '(')
	{
		s++;
		result = eval_expr0(&s);
		s++;
	}
	else
	{
		while ('0' <= *s && *s <= '9')
		{
			result = result * 10 + *s - '0';
			s++;
		}
	}
	*str = s;
	return (result);
}

int			eval_expr1(char **str)
{
	int		result;
	char	*s;

	s = *str;
	result = eval_expr2(&s);
	while (*s == '*' || *s == '/' || *s == '%')
	{
		if (*s == '*')
		{
			s++;
			result *= eval_expr2(&s);
		}
		else if (*s == '/')
		{
			s++;
			result /= eval_expr2(&s);
		}
		else if (*s == '%')
		{
			s++;
			result %= eval_expr2(&s);
		}
	}
	*str = s;
	return (result);
}

int			eval_expr0(char **str)
{
	int		result;
	char	*s;

	s = *str;
	result = eval_expr1(&s);
	while (*s == '+' || *s == '-')
	{
		if (*s == '+')
		{
			s++;
			result += eval_expr1(&s);
		}
		else if (*s == '-')
		{
			s++;
			result -= eval_expr1(&s);
		}
	}
	*str = s;
	return (result);
}

int			eval_expr(char *str)
{
	int		result;
	char	*str_without_whitespaces;
	char	*str_to_free;

	str_without_whitespaces = supprime_whitespaces(str);
	str_to_free = str_without_whitespaces;
	result = eval_expr0(&str_without_whitespaces);
	free(str_to_free);
	return (result);
}
