#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the tree leaves
 * @tree: the tree being scrutinized
 * Return: the number of tree leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	if (!(tree->left) || !(tree->right))
		return (1);

	/*recursively calculate the number of leaves on the tree on either side*/
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
