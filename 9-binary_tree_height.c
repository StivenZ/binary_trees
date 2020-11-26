#include "binary_trees.h"
/**
 * height - computes height
 * @tree: Pointer to tree binary
 * Return: height of the binary tree
 */
size_t height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (((height(tree->left) > height(tree->right)) ? height(tree->left) + 1 : height(tree->right)) + 1);
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

	return (height(tree) - 1);
}
