#include "binary_trees.h"

/**
 * binary_tree_heigh - calculates the height of the tree
 * @tree: the tree being measured
 * Return: the height of the tree from a given point.
*/
int tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!(tree) || (!(tree->left) && !(tree->right)))
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}


/**
 * binary_tree_balance - measures the Balance Factor
 * @tree: pointer to the tree
 * Return: the Balance Factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    int left, right;

    if (!tree)
        return (0);

    left = tree_height(tree->left);
    right = tree_height(tree->right);

    return (left - right);
}
