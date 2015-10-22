#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int maxs;
	int maxd;

	if (!root)
		return (-1);
	else
	{
		maxd = btree_level_count(root->right);
		maxs = btree_level_count(root->left);
		if (maxd > maxs)
			return (maxd + 1);
		else
			return (maxs + 1);
	}
}
