#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref,
		int (*cmp)())
{
	t_list *p;

	p = begin_list;
	while (p)
	{
		if (cmp(p->data, data_ref) == 0)
			return (p->data);
		p = p->next;
	}
	return (NULL);
}
