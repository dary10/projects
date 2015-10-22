#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		size;

	size = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}
