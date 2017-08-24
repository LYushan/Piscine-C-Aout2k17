/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 09:15:21 by julin             #+#    #+#             */
/*   Updated: 2017/08/12 09:19:52 by julin            ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	argc = 1;
	while (argv[argc] != '\0')
	{
		ft_putstr(argv[argc]);
		ft_putchar('\n');
		argc++;
	}
	return (0);
}
