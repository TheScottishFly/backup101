/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 07:08:54 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/18 12:49:25 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*begin;

	if (ft_strlen(to_find) == 0)
		return (str);
	while (*str)
	{
		begin = str;
		while (*str && *to_find && *str == *to_find)
		{
			str++;
			to_find++;
		}
		if (!(*to_find))
			return (begin);
		else
			str = begin;
		str++;
	}
	return (0);
}
