#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary binary_tree
 *
 * @parent: pointer of the parent node
 * @value: integer value of function
 *
 * Return: pointer of a node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->right = NULL;
	node->left = NULL;

	return (node);
}
