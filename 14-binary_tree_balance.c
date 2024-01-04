#include "binary_trees.h"

/**
 * binary_tree_balance - measures the Balance Factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the Balance Factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	return (left_height > right_height ? left_height : right_height);
}
