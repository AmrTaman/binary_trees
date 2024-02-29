#include "binary_trees.h"

/**
 * binary_tree_height - gives the hight of a tree.
 *
 * @tree: binary tree pointer
 *
 * Return: size_t number or zero if function fails
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hlf = 0, hrg = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hlf = 1 + binary_tree_height(tree->left);
	if (tree->right)
		hrg = 1 + binary_tree_height(tree->right);

	if (hlf > hrg)
		return (hlf);
	return (hrg);
}
