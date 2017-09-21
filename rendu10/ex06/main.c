/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 08:31:58 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 14:57:26 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "fcalc.h"
#include "fdoop.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	dispatch(int a, char c, int b)
{
	int		(*ftab[4])(int, int);
	char	str[12];

	ftab[0] = sum;
	ftab[1] = sub;
	ftab[2] = mul;
	ftab[3] = div;
	if (c == '+')
		ft_putstr(ft_itoa(ftab[0](a, b), str));
	else if (c == '-')
		ft_putstr(ft_itoa(ftab[1](a, b), str));
	else if (c == '*')
		ft_putstr(ft_itoa(ftab[2](a, b), str));
	else if (c == '-')
		ft_putstr(ft_itoa(ftab[3](a, b), str));
}

int		main(int argc, char *argv[])
{
	int a;
	int b;
	char str[12];

	a = 0;
	b = 0;
	if (argc == 4)
	{
		if (is_operator(argv[2][0]))
		{
			a = ft_atoi(argv[1]);
			b = ft_atoi(argv[3]);
			dispatch(a, argv[2][0], b);
		}
		else
			ft_putstr(ft_itoa(0, str));
	}
	return (0);
}
