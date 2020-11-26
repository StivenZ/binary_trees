#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: Pointer to node to check
 * Return: 1 if node, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0)
	else if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
