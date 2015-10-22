#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*p;

	p = NULL;
	p = (t_btree*)malloc(sizeof(t_btree));
	if (p)
	{
		p->item = item;
		p->left = 0;
		p->right = 0;
	}
	return (p);
}
