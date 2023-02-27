#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * binary factor is the difference between the Height of the left
 * sub tree and the height of the right sub tree
 *
 * @tree: Pointer to the root node of the tree to measure the balsnce factor
 *
 * Return: The Binary factor
 * Otherwise: return 0; if tree is NULL
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}

	return (left_height - right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Mamimum height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}

	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}
