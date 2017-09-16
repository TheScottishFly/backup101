/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 08:20:32 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 08:36:00 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i < j && i > k) || (i > j && i < k))
		return (i);
	else if ((j < i && j > k) || (j > i && j < k))
		return (j);
	else if ((k < i && k > j) || (k > i && k < j))
		return (k);
}
