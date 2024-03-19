#include "binary_trees.h"

/**
 *subtree_height - this is the function
 *@tree: this is a vraiable
 *Return: return 0
*/
int subtree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? subtree_height(tree->left) + 1 : 1;
	right = tree->right ? subtree_height(tree->right) + 1 : 1;

	return (left > right ? left : right);
}
