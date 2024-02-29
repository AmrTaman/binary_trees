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
	if (tree == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
