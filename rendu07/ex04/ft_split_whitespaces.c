/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 08:50:27 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/13 10:25:19 by grosnet-         ###   ########.fr       */
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
	while(str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
				j++;
			i++;
		}
		else
			i++;
	}
	return (j + 1);
}

int		*value_tab(char *str)
{
	int		*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j= 0;
	k = 0;
	tab = malloc(pt_tab_len(str) * sizeof(int));
	tab[k] = pt_tab_len(str);
	while(str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
				j++;
		}
		else
		{
			tab[k++] = j;
			j = 0;
		}
		i++;
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**pt_tab;
	int		length_tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	length_tab = pt_tab_len(str);
	pt_tab = malloc(length_tab * sizeof(char));
	while (length_tab > 0)
	{
		while (str[i])
		{
			if (str[i] != ' ' && str[i] != '\n' && str[i] == '\t')
				break ;
		}
	}
	return (pt_tab);
}

int main()
{
	printf("%d\n", pt_tab_len("Hello-all world !qqq flfff1514 35437 +"));
	return (0);
}
