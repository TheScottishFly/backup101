/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 15:27:26 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/12 18:34:16 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_str_table(char *argv[], int size)
{
	int		swap;
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < (size - 1))
	{
		j = 1;
		while (j < (size - 1))
		{
			swap = ft_strcmp(argv[j], argv[j + 1]);
			if (swap == -1)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	ft_sort_str_table(argv, argc);
	while (i > 0)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i--;
	}
	return (0);
}
