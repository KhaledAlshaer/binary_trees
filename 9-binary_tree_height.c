#include "binary_trees.h"

/**
 *binary_tree_height - this is the function
 *@tree: this is a vraiable
 *Return: return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = -1, left = -1;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (binary_tree_height(tree->left) + 1);
	else
		return (binary_tree_height(tree->right) + 1);
}
