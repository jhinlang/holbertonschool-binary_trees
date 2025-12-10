#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int left_perfect, right_perfect;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_height = 0;
	right_height = 0;

	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	left_perfect = (int)binary_tree_is_perfect(tree->left);
	right_perfect = (int)binary_tree_is_perfect(tree->right);

	if (left_height == right_height && left_perfect && right_perfect)
		return (1);
	else
		return (0);
}
