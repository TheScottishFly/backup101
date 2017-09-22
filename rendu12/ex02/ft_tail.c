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
	int fd;
	char buf;
	
	if (argc < 4)
	{
		write(2, "Argument required\n", 18);
		return (1);
	}
	ft_tail(argv[3], ft_atoi(argv[2]));
	return (0);
}
