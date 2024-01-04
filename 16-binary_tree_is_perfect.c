#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree, 0 if tree is NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - perfect tree
 * @tree: pointer to the tree
 * Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;
	const binary_tree_t *left = tree->left;
	const binary_tree_t *right = tree->right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (left_height == right_height)
		return (
			binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)
			);

	return (0);
}
