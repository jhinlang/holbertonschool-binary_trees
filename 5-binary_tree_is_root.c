#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a parent node is NULL
 * @node: pointer to the parent node to check
 *
 * Return: 0 if node is NULL, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* check if node is NULL if yes return (0)*/
	if (node == NULL)
		return (0);

    /* check if the parent node is NULL */
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
