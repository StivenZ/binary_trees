#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_left - inserts node to the left
 * @parent: parent pointer
 * @value: value to insert
 * Return: pointer to new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (!parent)
		return (NULL);

	new_left_node = malloc(sizeof(binary_tree_t));
	
	if (!new_left_node)
		return (NULL);

	if (parent->left)
	{
		new_left_node->left->n = value;
		parent->left->left = NULL;
		parent->left->right = NULL;
		parent->left->parent = parent;
	}
	else
	{
		new_left_node->parent = parent;
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}

	return (new_left_node);
}
