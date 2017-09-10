#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void top_bottom(int x, char left, char middle, char right)
{
	int i;

	i = 1;
	ft_putchar(left);
	while (i < (x-1))
	{
		ft_putchar(middle);
		i++;
	}
	ft_putchar(right);
	ft_putchar('\n');
}

void left_right(int x, int y, char middle)
{
	int		i;
	int		j;

	i = 0;
	j = 2;
	while (j < y)
	{
		while (i <= x)
		{
			if (i == 0 || i == (x-1))
				ft_putchar(middle);
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}

void rush(int x, int y, char left, char middle, char right)
{
	if (x == 1)
	{
		ft_putchar(left);
		ft_putchar('\n');
	}
	else
		top_bottom(x, left, middle, right);
	if (y > 2)
		left_right(x, y, middle);
	if (x == 1 && y > 2)
	{
		ft_putchar(right);
		ft_putchar('\n');
	}
	else if (x > 1 && y > 2)
		top_bottom(x, right, middle, left);
}

int main(int argc, char *argv[])
{
	int		a;
	int		b;

	a = *argv[1] - '0';
	b = *argv[2] - '0';
	rush(a, b, *argv[3], *argv[4], *argv[5]);
	return (0);
}
