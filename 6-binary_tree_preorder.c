#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses in pre-order a binary tree
 * @tree: Pointer to tree binary
 * @func: call a print function
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
