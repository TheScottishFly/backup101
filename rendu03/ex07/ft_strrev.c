/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 10:12:44 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/08 11:02:12 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	*ft_strrev(char *str)
{
	int j;
	char letter;
	char *pt;
	char *pt_pt;

	j = 12;
	*pt = &letter;
	*pt_pt = &pt;

	while (j > 0)
	{
		*pt = str[j];
		j--;
		pt++;
	}
	return (pt_pt);
}
