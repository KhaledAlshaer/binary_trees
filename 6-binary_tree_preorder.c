#include "binary_trees.h"

/**
 *binary_tree_preorder - this is the function
 *@tree: this is a vraiable
 *@func: this is a vraiable
*Return: return 0
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
