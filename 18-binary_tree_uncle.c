#include "binary_trees.h"
/**
 * binary_tree_uncle - is a function to finsd uncle of a node 
 * @node: is the node to check
 *
 * Return: nothing
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}