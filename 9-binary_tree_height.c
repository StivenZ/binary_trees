#include "binary_trees.h"
/**
 * height2 - computes height
 * @tree: Pointer to tree binary
 * Return: height of the binary tree
 */
size_t height2(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((height2(tree->left) > height2(tree->right)) ? \
	height2(tree->left) + 1 : height2(tree->right) + 1);
}

/**
 * binary_tree_height - computes height
 * @tree: Pointer to tree binary
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height2(tree) - 1);
}
