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

#include "fcalc.h"
#include "fdoop.h"

void	dispatch(int a, char c, int b)
{
	int		(*ftab[5])(int, int);

	ftab[0] = sum;
	ftab[1] = sub;
	ftab[2] = mul;
	ftab[3] = div;
	ftab[4] = mod;
	if (c == '+')
		ft_putnbr(ftab[0](a, b));
	else if (c == '-')
		ft_putnbr(ftab[1](a, b));
	else if (c == '*')
		ft_putnbr(ftab[2](a, b));
	else if (c == '/')
		ft_putnbr(ftab[3](a, b));
	else if (c == '%')
		ft_putnbr(ftab[4](a, b));
}

int		main(int argc, char *argv[])
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (argc == 4)
	{
		if (is_operator(argv[2][0]) && !argv[2][1])
		{
			a = ft_atoi(argv[1]);
			b = ft_atoi(argv[3]);
			if (argv[2][0] == '/' && b == 0)
				ft_putstr("Stop : division by zero");
			else if (argv[2][0] == '%' && b == 0)
				ft_putstr("Stop : modulo by zero");
			else
				dispatch(a, argv[2][0], b);
		}
		else
			ft_putnbr(0);
	}
	return (0);
}
