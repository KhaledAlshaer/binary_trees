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

	if (node->n < node->parent->n)
		return (node->parent->right);
	else if (node->n > node->parent->n)
		return (node->parent->left);
	else
		return (NULL);
}
