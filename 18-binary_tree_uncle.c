#include "binary_trees.h"
/**
 * binary_tree_sibling - finds sibling node
 * @node: pointer to node to check sibling
 * Return: pointer to sibling, or NULL if none
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node
 * Return: pointer to uncle node of the given node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
