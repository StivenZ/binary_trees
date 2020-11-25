#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node to the left
 * @parent: parent pointer
 * @value: value to insert
 * Return: pointer to new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_right_node;

    if (!parent)
        return (NULL);

    new_right_node = malloc(sizeof(binary_tree_t));
    if (!new_right_node)
        return (NULL);

    if ((parent->right) == NULL)
    {
        parent->right->n = value;
        parent->right->left = NULL;
        parent->right->right = NULL;
        parent->right->parent = parent;
    }
    else
    {
        new_right_node->parent = parent;
        new_right_node->right = parent->right;
        parent->right->parent = new_right_node;
    }

    return (new_right_node);
}
