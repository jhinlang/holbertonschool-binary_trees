#include "binary_trees.h"
/**
 * binary_tree_insert_left - function thats inserts a node as the left
 * @parent: is a pointer to the node parent
 * @value: is the value of the node
 *
 * Return: nothing
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	
	if (parent == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left = parent->new;
	}

	parent->left = new;

	return (new);
}
