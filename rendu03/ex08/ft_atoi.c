/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 16:25:14 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/10 19:37:13 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		len;
	int		result;

	i = 0;
	result = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (i <= len)
	{
		if (str[i] != '-')
			result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		result *= -1;
	return (result);
}
