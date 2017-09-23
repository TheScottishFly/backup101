/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grosnet- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 06:09:34 by grosnet-          #+#    #+#             */
/*   Updated: 2017/09/23 06:10:57 by grosnet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		fd;
	char	buf;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	argv++;
	while (*argv)
	{
		fd = open(*argv, O_RDONLY);
		if (fd != -1)
		{
			while (read(fd, &buf, 1) != 0)
				write(1, &buf, 1);
		}
		close(fd);
		argv++;
	}
	return (0);
}
