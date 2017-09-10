/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 15:02:52 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/10 17:01:15 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;
	int in_order;

	i = 0;
	in_order = 0;
	while (i < (size - 1))
	{
		while (in_order == 0)
		{
			if (tab[i] < tab[i+1])
			{
				temp = tab[i];
				tab[i] = tab[i+1];
				tab[i] = temp;
				in_order = 1;
			}
		}
		size--;
	}
}

int main(void)
{
	int tab[] = {1, 8, 5, 3, 7, 9, 6};

	ft_sort_integer_table(tab, 7);
	for(int i = 0; i < 7; i++)
		printf("%d", tab[i]);
	return (0);
}
