#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: pointer to root of the tree
 * Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return(0);

	if (tree->left || tree->right)
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}
	return (0);
}
