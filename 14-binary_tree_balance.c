#include "binary_trees.h"
/**
 * binary_tree_balance - measure tree balance factor
 * @tree: pointer to binary tree's root
 * Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
