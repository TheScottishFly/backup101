/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 07:08:54 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/14 15:38:10 by grosnet-         ###   ########.fr       */
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
	int		adv_str;
	int		adv_sub;
	int		begin_sub;
	int		size_sub;

	adv_str = 0;
	adv_sub = 0;
	begin_sub = 0;
	size_sub = ft_strlen(to_find);
	while (str[adv_str])
	{
		if (to_find[adv_sub] == str[adv_str])
		{
			if (adv_sub == 0)
				begin_sub = adv_str;
			adv_sub++;
		}
		else if (adv_sub > 0 && adv_sub < size_sub)
			adv_sub = 0;
		adv_str++;
	}
	if (adv_sub == size_sub)
		return (&str[begin_sub]);
	return (0);
}
