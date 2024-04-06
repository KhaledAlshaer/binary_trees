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
	int height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = (int)binary_tree_height(tree->left);
	height_right = (int)binary_tree_height(tree->right);

	if (height_left == height_right)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else if (tree->left != NULL && tree->right != NULL)
			return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	}

	return (0);
}
