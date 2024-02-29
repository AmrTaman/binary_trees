#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: binary tree pointer
 *
 * Return: size_t number or zero if the tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n, x, y;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	x = binary_tree_leaves(tree->left);
	y = binary_tree_leaves(tree->right);

	n = x + y;
	return (n);
}