#include "binary_trees.h"

/**
 * binary_tree_leaves - this is a function
 * @tree: this is a variable
 * Return: number or leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL || tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

/**
 * binary_tree_nodes - this is a function
 * @tree: this is a variable
 * Return: returns 0
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
 * binary_tree_is_full - this is a function
 * @tree: this is a variable
 * Return: returns 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int leaves = binary_tree_leaves(tree);
	int nodes = binary_tree_nodes(tree);

	if (leaves == nodes + 1)
		return (1);
	else
		return (0);
}
