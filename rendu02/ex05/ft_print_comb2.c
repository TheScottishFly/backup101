/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 16:59:22 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/09 14:08:30 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int ft_m_putchar(char *numbers)
{
	ft_putchar('0' + numbers[0] / 10);
	ft_putchar('0' + numbers[0] % 10);
	ft_putchar(' ');
	ft_putchar('0' + numbers[1] / 10);
	ft_putchar('0' + numbers[1] % 10);
	if (numbers[0] != 98 && numbers[1] <= 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	char numbers[2];

	while(numbers[0] != 99 && numbers[1] <= 99)
	{
		numbers[1]++;
		if (numbers[1] > 99)
		{
			numbers[1] = 0;
			numbers[0]++;
		}
		if (numbers[0] < numbers[1])
		{
			ft_m_putchar(numbers);
		}
	}
}
