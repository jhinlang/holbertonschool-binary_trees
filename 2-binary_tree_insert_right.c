#include "binary_trees.h"
/**
 * binary_tree_insert_right - function thats inserts a node as the right child
 * @parent: pointer to parent
 * @value: value of node
 *
 * Return: nothing
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return(new);
}
