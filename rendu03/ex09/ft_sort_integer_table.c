/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 15:02:52 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/10 17:31:57 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1))
		{
			if (tab[j] > tab[j+1])
			{
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
			j++;
		}
		i++;
	}
}
