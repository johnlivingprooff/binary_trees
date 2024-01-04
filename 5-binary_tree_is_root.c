#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is the root
 * @node: node to be checked
 * Return: 1 if node is a root, 0 if node is null or not root
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}
