#include "binary_trees.h"
/**
 * binary_tree_node - is a function to creates a binary tree node
 * @parent: is a pointer to the parent node
 * @value: is the value of the node
 *
 * Return: nothing
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
