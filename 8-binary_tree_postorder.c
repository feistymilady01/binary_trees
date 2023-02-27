#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse through a binary tree using the
 * post-order traversal
 *
 * @tree: Pointer to the root node of the tree to tranverse
 * @func: Pointer to a function to call for each node
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
