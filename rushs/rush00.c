/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 18:20:15 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/13 07:34:15 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	top_bottom(int x, char left, char middle, char right)
{
	int i;

	i = 1;
	ft_putchar(left);
	while (i < (x - 1))
	{
		ft_putchar(middle);
		i++;
	}
	ft_putchar(right);
	ft_putchar('\n');
}

void	left_right(int x, int y, char middle)
{
	int		i;
	int		j;

	i = 0;
	j = 2;
	while (j < y)
	{
		while (i <= x)
		{
			if (i == 0 || i == (x - 1))
				ft_putchar(middle);
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}

void	rush(int x, int y)
{
	if (x == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (x > 1)
		top_bottom(x, 'o', '-', 'o');
	if (y > 2)
		left_right(x, y, '|');
	if (x == 1 && y == 2)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (x > 1 && y > 2)
		top_bottom(x, 'o', '-', 'o');
}
