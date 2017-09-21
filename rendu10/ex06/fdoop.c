/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdoop.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 13:02:59 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/21 14:46:48 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_operator(char c)
{
	if (c != '+' && c != '-' && c != '*' && c != '/')
		return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int nb;
	int neg;

	neg = 0;
	nb = 0;
	while (*str <= 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		else
			neg = 0;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}

int		count_diz(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		nb = -nb;
	if (nb == 0 || nb == 1)
		i = 1;
	while (nb > 1)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb, char *str)
{
	int i;
	int j;
	int neg;

	i = count_diz(nb);
	j = i - 1;
	neg = 0;
	if (nb < 0)
	{
		nb = -nb;
		neg = 1;
		j++;
		i++;
	}
	while (nb >= 10)
	{
		str[j--] = nb % (nb / 10) + '0';
		nb /= 10;
	}
	if (neg == 1)
		str[0] = '-';
	str[j--] = nb + '0';
	str[i] = '\0';
	return (str);
}
