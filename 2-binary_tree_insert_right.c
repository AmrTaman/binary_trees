#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right node
 *
 * @parent: parent node
 * @value: value of the node
 *
 * Return: Created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = node;
		node->parent = parent;
		node->right = NULL;
		node->left = NULL;
		node->n = value;
		return (node);
	}
	else
	{
		node->right = parent->right;
		node->left = NULL;
		node->n = value;
		node->parent = parent;
		parent->right->parent = node;
		parent->right = node;
		return (node);
	}
}