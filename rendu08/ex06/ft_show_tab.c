/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 09:50:44 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/18 13:47:12 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int		ft_putchar(char c);

int		ft_strlen(char *str);
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		if (ft_strlen(tab[i]) > 0)
		{
			while (tab[i][j] != '\0')
			{
				ft_putchar(tab[i][j]);
				j++;
			}
			ft_putchar('\n');
		}
		i++;
		j = 0;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (par[i].str != 0)
	{
		while (par[i].str[j] != '\0')
		{
			ft_putchar(par[i].str[j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		while (par[i].size_param >= 10)
		{
			ft_putchar(par[i].size_param % 10 + '0');
			par[i].size_param /= 10;
		}
		ft_putchar(ft_putchar(par[i].size_param + '0'));
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
