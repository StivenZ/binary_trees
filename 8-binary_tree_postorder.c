#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses in postorder a binary tree
 * @tree: Pointer to tree binary
 * @func: call a print function
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
