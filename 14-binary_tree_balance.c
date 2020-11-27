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

	return ((height(tree->left) > height(tree->right)) ? \
	height(tree->left) + 1 : height(tree->right) + 1);
}

/**
 * binary_tree_height2 - computes height
 * @tree: Pointer to tree binary
 * Return: height of the binary tree
 */
size_t binary_tree_height2(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree));
}

/**
 * binary_tree_balance - measure tree balance factor
 * @tree: pointer to binary tree's root
 * Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height2(tree->left) - binary_tree_height2(tree->right));
}
