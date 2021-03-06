/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 08:50:27 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/18 09:45:17 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c)
{
	if (c != ' ' && c != '\n' && c != '\t')
		return (0);
	return (1);
}

int		position_next_word(char *str, int position)
{
	while (is_separator(str[position]))
		position++;
	return (position);
}

int		get_length_next_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (is_separator(str[j]))
		j++;
	while (!(is_separator(str[j + i])) && str[i + j] != '\0')
		i++;
	return (i + 1);
}

int		get_count_words(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (i == 0 && !(is_separator(str[i])))
			j++;
		else if (i != 0 && !(is_separator(str[i])) &&
				is_separator(str[i - 1]))
			j++;
		i++;
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	char	**pt_tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	pt_tab = malloc((get_count_words(str) + 1) * sizeof(char*));
	while (i < get_count_words(str))
	{
		pt_tab[i] = malloc((get_length_next_word(str) + 1) * sizeof(char));
		k = position_next_word(str, k);
		while (!(is_separator(str[k])) && str[k] != '\0')
			pt_tab[i][j++] = str[k++];
		pt_tab[i++][j++] = '\0';
		j = 0;
	}
	pt_tab[i] = 0;
	return (pt_tab);
}
