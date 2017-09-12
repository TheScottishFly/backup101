/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 20:23:11 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/12 20:30:35 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_argvlen(argc, **argv)
{
	int i;
	int j;
	int total_length;

	i = 1;
	j = 0;
	total_length = 0;
	while (i <= argc)
	{
		while (argv[i][j])
			j++;
		i++;
		j++;
	}
	return (j - 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	int k;
	char *str;

	i = 1;
	j = 0;
	k = 0;
	str = malloc(ft_argvlen(argc, argv) * sizeof(char));
	while (i <= argc)
	{
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			k++;
		}
		i++;
		j = 0;
		str[k++] = '\n';
		k++;
	}
	return (str);
}
