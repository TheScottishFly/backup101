#include "ft.c"
#include <stdio.h>

int main() {
	char str[12] = "Hello world";
	char *revstr = ft_strrev(str);

	printf("%s\n", revstr);
	return (0);
}
