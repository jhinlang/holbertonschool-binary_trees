#include "binary_trees.h"
#include "9-binary_tree_height.c"


int binary_tree_balance(const binary_tree_t *tree)
{
	int left_hieght = 0;
	int right_hieght = 0;

	if (tree == NULL)
	return (0);

	if (tree->left)
	left_hieght = 1 + binary_tree_hieght(tree->left);

	if (tree->right)
	right_hieght = 1 + binary_tree_hieght(tree->right);

	return left_hieght - right_hieght;
}