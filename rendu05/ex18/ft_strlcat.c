/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:57:21 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/12 09:13:14 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(dest);
	while (src[i])
	{
		if (length < size - 1)
		{
			dest[length + i] = src[i];
			i++;
		}
		else
			break ;
	}
	dest[length + i - 1] = '\0';
	if (length < size)
		return (length + i);
	else
		return (size);
}
