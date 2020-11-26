#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaf nodes of a binary tree
 * @tree: pointer to root of the tree
 * Return: number of leaf nodes
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->right && !tree->left)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
