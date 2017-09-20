/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 20:23:11 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/20 10:44:16 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_argvlen(char **argv)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	while (argv[i])
	{
		while (argv[i][k])
			k++;
		i++;
		j += k + 1;
		k = 0;
	}
	return (j + 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 1;
	k = 0;
	str = malloc(ft_argvlen(argv) * sizeof(char));
	while (argc > 1)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}
		if (argc > 2)
			str[k] = '\n';
		else
			str[k] = '\0';
		i++;
		k++;
		argc--;
	}
	return (str);
}
