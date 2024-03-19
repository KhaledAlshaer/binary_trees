#include "binary_trees.h"

/**
 * binary_tree_sibling - this is the function
 * @node: this is a vraiable
 * Return: returns 0
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
