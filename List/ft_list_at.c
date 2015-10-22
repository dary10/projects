#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list)
	{
		nbr--;
		if (nbr == 0)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (begin_list);
}
