/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:25:14 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/11 13:01:17 by grosnet-         ###   ########.fr       */
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

int		ft_atoi(char *str)
{
	int		i;
	int		j;
	int		len;
	int		result;

	j = 0;
	len = ft_strlen(str);
	result = 0;
	while (str[j] != '-' && (str[j] <= 48 || str[j] >= 57))
		j++;
	i = j;
	while ((str[i] == '-') || (str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] != '-' && str[i] >= 48 && str[i] <= 57)
			result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[j] == '-')
		result *= -1;
	return (result);
}
