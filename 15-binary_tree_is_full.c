#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a BT is full
 * @tree: pointer to the root of the BT
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	full = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	if (full % 2 == 0)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_size - computes size of the binary tree
 * @tree: pointer to root
 * Return: size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
