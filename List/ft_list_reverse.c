#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *s;
	t_list *p;
	t_list *q;

	p = NULL;
	s = *begin_list;
	if (s && s->next)
	{
		p = s->next;
		q = p->next;
		s->next = NULL;
		p->next = s;
		while (q)
		{
			s = p;
			p = q;
			q = q->next;
			p->next = s;
		}
		*begin_list = p;
	}
}
