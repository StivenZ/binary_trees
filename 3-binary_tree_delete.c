#include "binary_trees.h"

/**
 * 
 * 
 * 
 * 
 */

void binary_tree_delete(binary_tree_t *tree);
{	
	binary_tree_t *tmp;
	tmp = tree;
		
	
	if (!parent)
		return;

	while (tmp->left) != NULL;
	{
		tmp = tmp->left;
	}
	if (tmp->right != NULL)
	{
		tmp = tmp->right;
		binary_tree_delete(tmp);
	}
	free (tmp);
	return;
}	

