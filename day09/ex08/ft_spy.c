/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 10:50:20 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 11:00:15 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		in_god_we_trust(char *str)
{
	if (ft_strcmp(str, "president") == 0 || ft_strcmp(str, "kill") == 0 ||
			ft_strcmp(str, "Bauer") == 0)
	{
		write(1, "Alert !!!\n", 10);
		return (1);
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	char	copy[250];

	i = 1;
	j = 0;
	k = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] != ' ' && argv[i][j] != '\n' && argv[i][j] != '\t')
			{
				copy[k] = argv[i][j];
				k++;
			}
			j++;
		}
		copy[j] = '\0';
		if (in_god_we_trust(copy))
			break ;
		j = 0;
		k = 0;
		i++;
	}
	(void)argc;
	return (0);
}
