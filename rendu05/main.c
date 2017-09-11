#include "ft.c" // Interdit par la norminette, c'est uniquement pour les tests
#include <stdio.h>

int main(void)
{
	char *str = "Salut";
	char *up_str = NULL;

	up_str = ft_strupcase(str);
	printf("%s", up_str);
	return (0);
}
