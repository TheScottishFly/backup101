/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 14:41:57 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 14:42:40 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		i;
	int		j;

	i = 0;
	while (i < length)
	{
		if (tab[i] == 0)
		{
			j = i;
			while (j < length)
			{
				tab[j] = tab[j + 1];
				j++;
			}
			length--;
		}
		i++;
	}
	return (length);
}
