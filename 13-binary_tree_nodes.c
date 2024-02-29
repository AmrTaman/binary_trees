#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: binary tree pointer
 *
 * Return: size_t number or zero if the tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t x, y, n;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	else
	{
		x = binary_tree_nodes(tree->left);
		y = binary_tree_nodes(tree->right);
		n = x + y + 1;
		return (n);
	}
}
