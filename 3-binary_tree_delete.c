#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * Description: if tree is NULL, nothing is done
 *
 * @tree: pointer to the root of the tree to delete
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left)
			binary_tree_delete(tree->left);
		if (tree->right)
			binary_tree_delete(tree->right);

		free(tree);
	}
}
