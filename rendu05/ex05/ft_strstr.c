/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 07:08:54 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/17 12:48:26 by grosnet-         ###   ########.fr       */
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
	int		adv_sub;
	char	*begin_sub;
	int		size_sub;

	adv_sub = 0;
	size_sub = ft_strlen(to_find);
	if (size_sub == 0)
		return (str);
	while (*str)
	{
		if (to_find[adv_sub] == *str)
		{
			if (adv_sub == 0)
				begin_sub = str;
			adv_sub++;
		}
		else if (adv_sub > 0 && adv_sub < size_sub)
		{
			adv_sub = 0;
			str = begin_sub + 1;
		}
		str++;
	}
	if (adv_sub == size_sub)
		return (begin_sub);
	return (0);
}
