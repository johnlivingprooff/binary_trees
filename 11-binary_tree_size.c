#include "binary_trees.h"

/**
 * binary_tree_size - calculates the number of nodes on the tree
 * @tree: the tree
 * Return: size of tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left, right;
    
    if (!tree)
        return (0);

    left = binary_tree_size(tree->left);
    right = binary_tree_size(tree->right);

    return (1 + right + left);
}
