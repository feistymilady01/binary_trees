#include "binary_trees.h"


/**
 * binary_tree_node - creates a new binary tree node
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: integer to be placed in the node
 *
 * Return: Pointer to a new node
 * Otherwise: NULL
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return (NULL);
	}

	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;

	return (newnode);
}
