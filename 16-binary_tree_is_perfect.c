#include "binary_trees.h"

/**
 * binary_tree_is_perfect - perfect tree
 * @tree: pointer to the tree
 * Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	const binary_tree_t *left = tree->left;
	const binary_tree_t *right = tree->right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

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
				binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)
				);
	}

	return (0);
}
