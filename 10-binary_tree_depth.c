#include "binary_trees.h"

/**
 * binary_tree_depth - gives the depth of a tree
 *
 * @tree: binary tree pointer
 *
 * Return: size_t number or zero if function fails
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;
	else
		depth = -1;
	return (depth);
}
