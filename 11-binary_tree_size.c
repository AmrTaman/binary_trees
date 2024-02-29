#include "binary_trees.h"

/**
 * binary_tree_size - gives the size of a tree
 *
 * @tree: binary tree pointer
 *
 * Return: size_t number or zero if function fails
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
    size = binary_tree_size(tree->left) + 1;
    size = binary_tree_size(tree->right) + size;
    return (size);
}
