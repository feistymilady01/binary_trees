#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another
 *
 * @parent: Pointer to the node to insert the right child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newnode
 * Otherwie: NULL
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node = NULL;
	binary_tree_t *old_right_node = NULL;

	old_right_node = parent->right;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_right_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		parent->right = new_right_node;
		new_right_node->right = old_right_node;
		old_right_node->parent = new_right_node;
	}
	else
	{
		parent->right = new_right_node;
		return (new_right_node);
	}
	return (NULL);
}
