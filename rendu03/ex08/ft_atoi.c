/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:25:14 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/13 07:21:29 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		begin_by_letter(char *str)
{
	int i;

	i = 0;
	while (str[i] != '-' && str[i] != '+' && (str[i] <= 48 || str[i] >= 57))
	{
		if (str[i] <= 32)
			i++;
		else if ((str[i] >= 33 && str[i] <= 48) || (str[i] >= 57))
			return (0);
	}
	return (i);
}

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

	len = ft_strlen(str);
	result = 0;
	j = begin_by_letter(str);
	if (j == 0 && str[j] != '+' && str[j] != '-' &&
			str[i] <= 47 && str[i] >= 58)
		return (0);
	i = j;
	if ((str[i] == '-' || str[i] == '+') &&
			(str[i + 1] == '-' || str[i + 1] == '+'))
		return (0);
	while (str[i] == '-' || str[i] == '+' || (str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] >= 48 && str[i] <= 57)
			result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[j] == '-')
		result *= -1;
	return (result);
}
