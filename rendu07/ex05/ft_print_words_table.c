/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_table.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 07:25:11 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/15 08:56:31 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_words_table(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i][j] != 0)
	{
		while(tab[i][j])
			ft_putchar(tab[i][j++]);
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
