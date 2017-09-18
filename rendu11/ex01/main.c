#include "ft_list.h"
#include <stdio.h>

t_list		*ft_create_elem(void *data);
void		ft_list_push_back(t_list **begin_list, void *data);

int main()
{
	t_list *first;
	t_list *second;
	int i;

	i = 1;
	first = ft_create_elem(&i);
	second = ft_create_elem(&i);
	first->next = second;

	ft_list_push_back(&first, &(i));
	printf("%p\n", second->next);
	return (0);
}
