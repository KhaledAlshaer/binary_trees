#include "binary_trees.h"

/**
 *binary_tree_size - this is the function
 *@tree: this is a vraiable
 *Return: return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
