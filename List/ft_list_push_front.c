#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_item;

	if (*begin_list)
	{
		new_item = ft_create_elem(data);
		new_item->next = *begin_list;
		*begin_list = new_item;
	}
	else
		*begin_list = ft_create_elem(data);
}
