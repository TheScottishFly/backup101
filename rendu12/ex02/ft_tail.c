#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

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

void ft_tail(char *file, int buf_size)
{
	int fd;
	char buf[32000];
	int f_size;
	int cursor;
	
	fd = open(file, O_RDONLY);
	f_size = read(fd, buf, 32000);
	if (buf_size > f_size)
		cursor = 0;
	else
		cursor = f_size - buf_size;
	while (buf[cursor])
	{
		write(1, &buf[cursor], 1);
		cursor++;
	}
	close(fd);
}

int main(int argc, char *argv[])
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
		while (argv[i][j] != '\0')
			j++;
		write(1, "==> ", 5);
		write(1, argv[i], j);
		write(1, " <==\n", 6);
		ft_tail(argv[i], ft_atoi(argv[2]));
		if (i < (argc - 1))
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
