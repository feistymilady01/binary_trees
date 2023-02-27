#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to teh root of the tree to check
 *
 * Return: 1 if tree is perfect
 * Otherwise: 0; if tree is NULL
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t size = 0;
	size_t power = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	power = (size_t)_pow_recursion(2, height + 1);

	return (power - 1 == size);
}

/**
 * binary_tree_size - Measure the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the binary tree
 * Otherwise: if tree is NULL, 0
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
	{
		return (0);
	}

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (1 + left + right);
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

/**
 * _pow_recursion - prints the value of x raised to the power of y
 *
 * @x: Base number
 * @y: power raised to
 *
 * Return: Final result of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
