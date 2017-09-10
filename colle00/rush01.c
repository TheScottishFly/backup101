#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void top(int x)
{
	int i;
	
	i = 1;
	ft_putchar('o');
	while(i < x)
		ft_putchar('-');
		i++;
	ft_putchar('o');
}

void left_right(int x, int y)
{
	int i;
	
	i = 0;
	if(i == 0 || i == x)
		ft_putchar('|');
	if(i < x)
		i++;
}

void bottom(int x)
{
	int i;
	
	i = 1;
	ft_putchar('o');
	while(i < x)
		ft_putchar('-');
		i++;
	ft_putchar('o');
}

void rush(int x, int y)
{
	if(x == 1)
		ft_putchar('o');
	else
		top(x);
	if(y > 1)
		left_right(x, y);
	if(x > 1)
		bottom(x);
}

int main(void)
{
	rush(5, 5);
	return (0);
}
