#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left-node to the parent node
 * @parent: pointer to the parent node
 * @value: value of the left-node inserted.
 * Return: pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *left_node;

    if (parent == NULL)
        return (NULL);

    left_node = binary_tree_node(parent, value);

    if (left_node == NULL)
        return (NULL);

    if (parent->left)
    {
        left_node->left = parent->left;
        parent->left->parent = left_node;
    }

    parent->left = left_node;
    left_node->parent = parent;
    left_node->right = NULL;

    return (left_node);
}