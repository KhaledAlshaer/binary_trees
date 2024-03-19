#include "binary_trees.h"

/**
 *binary_tree_leaves - this is the function
 *@tree: this is a vraiable
 *Return: return 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL || tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
