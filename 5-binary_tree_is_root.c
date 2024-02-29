#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node is root or not.
 *
 * @node: the node that will be checked
 *
 * Return: 1 means the node is root and 0 vice versa
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
