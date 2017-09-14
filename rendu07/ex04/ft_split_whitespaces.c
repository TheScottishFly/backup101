/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 08:50:27 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/14 13:03:12 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		pt_tab_len(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
				j++;
		}
		i++;
	}
	return (j + 1);
}

int		*define_value_tab(char *str)
{
	int		*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(pt_tab_len(str) + 1 * sizeof(int));
	tab[k] = pt_tab_len(str);
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			j++;
		else
		{
			k++;
			tab[k] = j;
			j = 0;
		}
		i++;
	}
	k++;
	tab[k] = j;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**pt_tab;
	int		*values_tab;
	int		j;
	int		k;

	j = -1;
	k = 0;
	values_tab = define_value_tab(str);
	pt_tab = malloc((values_tab[0] + 1) * sizeof(char));
	while (j++ < (values_tab[0]))
	{
		if (*str != ' ' && *str != '\n' && *str != '\t')
			pt_tab[j] = malloc(values_tab[j + 1] * sizeof(char));
		while (*str)
		{
			if (*str == ' ' || *str == '\n' || *str == '\t')
			{
				k = 0;
				str++;
				break ;
			}
			else
				pt_tab[j][k++] = *str;
			str++;
		}
	}
	pt_tab[j++] = 0;
	return (pt_tab);
}

int		main()
{
	char **test = ft_split_whitespaces("test tes test tes te");
	for (int i = 0; i < 6; i++)
		printf("%s\n", test[i]);
	return (0);
}
