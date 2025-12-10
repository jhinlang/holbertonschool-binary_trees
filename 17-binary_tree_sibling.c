#include "binary_trees.h"
/**
 * binary_tree_sibling - a function thats find the sibling of a node
 * @node: is a pointer to the node to find sibling
 *
 * Return: nothing
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	return (node->parent->left);
}