#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 * factor
 *
 * Return: The balance factor either +ve, -ve or 0
 * +ve if the height on the left > height on the right
 * -ve if the height on the left < height on the right
 *  0 if they are on the same level or tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
