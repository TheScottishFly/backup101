#include "ft.c"
#include <stdio.h>

int main() {
	char str[12] = "Hello world";
	char strrev[12] = ft_strrev(str);

	printf("%s\n", strrev);
	return (0);
}
