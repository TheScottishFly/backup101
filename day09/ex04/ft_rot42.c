/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 08:37:04 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/16 09:10:36 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'a' + (str[i] - 'a' + 42) % 26;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'A' + (str[i] - 'A' + 42) % 26;
		i++;
	}
	return (str);
}
