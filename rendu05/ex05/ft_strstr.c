/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 07:08:54 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/10 18:40:19 by grosnet-         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *subsearch)
{
	int		adv_str;
	int		adv_sub;
	int		begin_sub;
	int		size_sub;

	adv_str = 0;
	adv_sub = 0;
	begin_sub = 0;
	size_sub = ft_strlen(subsearch);
	while (str[adv_str])
	{
		if (subsearch[adv_sub] == str[adv_str])
		{
			begin_sub = adv_str;
			adv_sub++;
		}
		adv_str++;
	}
	if (adv_sub == size_sub)
		return (&str[begin_sub]);
	return (NULL);
}
