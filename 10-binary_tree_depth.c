#include "binary_trees.h"
/**
 * binary_tree_depth - find depth of a node
 * @tree: pointer to tree
 * Return: Maximum depth of a node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	else
		return (0);
}
