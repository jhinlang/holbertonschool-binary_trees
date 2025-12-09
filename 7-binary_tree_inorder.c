#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    /* 1. If tree or func is NULL, do nothing */
    if (tree == NULL || func == NULL)
    {
        return;
    }

    /* 2. Traverse the left subtree (if it exists) */
    if (tree->left != NULL)
    {
        binary_tree_inorder( tree->left, func );
    }

    /* 3. Visit the current node: call func with the node value */
    func(tree->n);

    /* 4. Traverse the right subtree (if it exists) */
    if (tree->right != NULL)
    {
        binary_tree_inorder(tree->right, func);
    }
}
