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

int		ft_m_putchar(char i, char j, char k, char l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	ft_putchar(',');
	ft_putchar(' ');
	return (0);
}

void	ft_print_comb2(void) {

	int i;
	int j;
	int k;
	int l;

	i = '0';
	j = '0';
	k = '0';
	l = '1';

	while(i <= '9') {
		while(j <= '8') {
			while(k <= '9') {
				while(l <= '9') {
					ft_m_putchar(i, j, k, l);
				}
					l++;
				}
				l = i;
				k++;
			};
			k = j;
			j++;
		}
		j = '0';
		i++;
	}
}

