/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:57:21 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/11 12:20:52 by grosnet-         ###   ########.fr       */
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

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(dest);
	if (length < size)
		return (length);
	while (src[i] && i < (size - length))
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (length + i);
}
