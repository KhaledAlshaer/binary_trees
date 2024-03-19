#include "binary_trees.h"

/**
 * binary_tree_uncle - this is the function
 * @node: this is a vraiable
 * Return: returns 0
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left->left->n == node->n ||
		node->parent->parent->left->right->n == node->n)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
