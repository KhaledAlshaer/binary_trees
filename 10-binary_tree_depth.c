#include "binary_trees.h"

/**
 *binary_tree_depth - this is the function
 *@tree: this is a vraiable
 *Return: return 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent) + 1;
	}

	return (depth);
}
