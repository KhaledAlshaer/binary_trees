#include "binary_trees.h"

/**
 * binary_tree_height - this is the function 
 * @tree: this is a vraiable
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (left > right ? left : right);
}

/**
 * binary_tree_nodes - this is the function
 * @tree: this is a vraiable
 * Return: the nodes counts
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - this is the function
 * @tree: this is a vraiable
 * Return: returns 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, nodes, power, i;

	if (tree == NULL)
		return (0);

	h = (int)binary_tree_height(tree);
	nodes = (int)binary_tree_nodes(tree);
	power = 1;

	for (i = 0; i < h; i++)
		power *= 2;

	if ((power - 1) == nodes)
		return (1);
	else
		return (0);
}
