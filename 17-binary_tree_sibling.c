#include "binary_trees.h"

/**
 * binary_tree_sibling - findes the sibling of a node
 * @node: pointer to the node
 * Return: pointer to sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node == node->parent->left)
	{
		if (node->parent->right)
			return (node->parent->right);
	}

	if (node == node->parent->right)
	{
		if (node->parent->left)
			return (node->parent->left);
	}

	return (NULL);
}
