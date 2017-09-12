/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 19:39:11 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/12 20:07:45 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*new_str;

	length = 0;
	i = 0;
	while (src[length])
		length++;
	new_str = malloc((length - 1) * sizeof(char));
	if (new_str == NULL)
		exit(0);
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	return (new_str);
}
