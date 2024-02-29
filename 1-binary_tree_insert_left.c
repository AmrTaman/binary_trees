#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert lift
 *
 * @parent: the parent
 * @value: the value
 *
 * Return: node of binary_tree_t type
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = node;
		node->parent = parent;
		node->n = value;
		node->left = NULL;
		node->right = NULL;
	return (node);
	}
	else
	{
		node->n = value;
		node->left = parent->left;
		node->right = NULL;
		parent->left->parent = node;
		node->parent = parent;
		parent->left = node;
		return (node);
	}
	return (NULL);
}
