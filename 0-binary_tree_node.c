#include "binary_trees.h"

/**
 *binary_tree_node - this is the function
 *@parent: this is a vraiable
 *@value: this is a vraiable
 *Return: return 0
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = (binary_tree_t *)  malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
