/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:15:35 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/14 15:31:33 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if ((i == 0 || (!((str[i - 1] >= 48 && str[i - 1] <= 57) ||
						(str[i - 1] >= 65 && str[i - 1] <= 90) ||
						(str[i - 1] >= 97 && str[i - 1] <= 122)))) &&
				(str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
