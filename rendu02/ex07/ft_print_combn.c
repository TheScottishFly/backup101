/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 16:59:22 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/10 08:44:48 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		convert_str_int(char *str)
{
	int  i;
	int len;
	int result;

	i = 0;
	result = 0;
	len = 0;
	while (str[i] != '\0')
		len++;
	while (i <= len)
		result = result * 10 + (str[i] - '0');
	return (result);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb += n	b * -2;
	}
	if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_combn(int n)
{
	char	numbers[n];
	int		i;
	bool	b;

	i = 1;
	b = false;
	while (i <= n)
	{
		if (numbers[i] > numbers[i--])
		{
			b = true;
			i++;
		}
	}
	i = 1;
	if (b)
		ft_putnbr(convert_str_int(numbers));
	while (i <= n)
	{
		
	}
}
