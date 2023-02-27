#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a give node is a root
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root,
 *	0 if not and if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	else
		return (0);
}
