#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *p;
	t_list *q;

	p = *begin_list;
	q = p->next;
	while (q)
		if ((*cmp)(q->data, data_ref) == 0)
		{
			p->next = q->next;
			free(q);
			q = p->next;
		}
		else
		{
			p = q;
			q = p->next;
		}
	p = *begin_list;
	if ((*cmp)(p->data, data_ref) == 0)
	{
		*begin_list = p->next;
		free(p);
	}
}
