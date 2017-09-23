/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 06:09:39 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/23 06:14:14 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

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
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	if (neg == 1)
		nb = -nb;
	return (nb);
}

void	ft_tail(char *file, int buf_size)
{
	int		fd;
	char	*buf;
	int		f_size;
	int		cursor;

	buf = malloc(sizeof(char) * 32000);
	fd = open(file, O_RDONLY);
	f_size = read(fd, buf, 32000);
	cursor = f_size - buf_size;
	while (buf[cursor])
	{
		write(1, &buf[cursor], 1);
		cursor++;
	}
	free(buf);
	close(fd);
}

void	printf_header(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
		j++;
	write(1, "==> ", 5);
	write(1, str, j);
	write(1, " <==\n", 6);
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 3;
	j = 0;
	if (argc < 4)
	{
		write(2, "Argument required\n", 18);
		return (1);
	}
	while (i < argc)
	{
		if (argc > 4)
			printf_header(argv[i]);
		ft_tail(argv[i], ft_atoi(argv[2]));
		if (i < (argc - 1))
			write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
