#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the tree depth
 * @tree: the measured tree
 * Return: the depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!(tree) || !(tree->parent))
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
