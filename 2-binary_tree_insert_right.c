#include "binary_trees.h"

/**
 *binary_tree_insert_right - this is the function
 *@parent: this is a vraiable
 *@value: this is a vraiable
 *Return: return 0
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	
	if (node == NULL)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}

	parent->right = node;

	return (node);

}
