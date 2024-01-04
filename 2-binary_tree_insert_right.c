#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts the right node
 * @parent: pointr to the parent node
 * @value: value of created right-node
 * Return: pointer to new right node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;
	right_node->parent = parent;
	right_node->left = NULL;

	return (right_node);
}
