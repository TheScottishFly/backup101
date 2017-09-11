/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:50:49 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/11 17:21:46 by grosnet-         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		length;

	length = ft_strlen(dest);
	while (src[i] && i <= (nb - 1))
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
