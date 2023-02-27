#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child of another node
 * @parent: Pointer to the parent node of the node ot create
 * @value: valu to be placed in the node
 *
 * Return: newnode
 * Otherwise: NULL
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL;
	binary_tree_t *old_left_node = NULL;

	old_left_node = parent->left;
	new_left_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (parent == NULL || new_left_node == NULL)
	{
		free(new_left_node);
		return (NULL);
	}
	new_left_node->left = NULL;
	new_left_node->right = NULL;
	new_left_node->n = value;
	new_left_node->parent = parent;

	if (parent->left)
	{
		new_left_node->left = old_left_node;
		old_left_node->parent = new_left_node;
	}
	parent->left = new_left_node;

	return (new_left_node);
}
