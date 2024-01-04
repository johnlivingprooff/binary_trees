#include "binary_trees.h"

/**
 * binary_tree_balance - measures the Balance Factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the Balance Factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	const binary_tree_t *left = tree->left;
	const binary_tree_t *right = tree->right;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	if ((tree->left) && (tree->right))
	{
		while (left || right)
		{
			if (left)
			{
				left_height++;
				left = left->left;
			}
			if (right)
			{
				right_height++;
				right = right->right;
			}
		}

		if (left_height == right_height)
			return (
				binary_tree_balance(tree->left) && binary_tree_balance(tree->right)
				);
	}

	return (0);
}
