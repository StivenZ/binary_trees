#include "binary_trees.h"
/**
 * binary_tree_balance - that measures the balance factor
 * of a binary treecomputes height
 * @tree: Pointer to tree binary
 * Return: height of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to root of tree.
 * Return: height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r, height;

	if (!tree)
		return (0);
	l = 1 + binary_tree_height(tree->left);
	r = 1 + binary_tree_height(tree->right);
	height = l > r ? l : r;
	return (height);
}
