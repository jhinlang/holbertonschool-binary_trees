#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: height of the tree, or 0 if tree is NULL
 *         (leaf has height 0, as in the project)
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return ((left_h >= right_h ? left_h : right_h) + 1);

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	if (left_h != right_h)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
