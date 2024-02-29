#include "binary_trees.h"

/**
 * binary_tree_heights - gives the hight of a tree
 *
 * @tree: binary tree pointer
 *
 * Return: int number or zero if function fails
 */
int binary_tree_heights(const binary_tree_t *tree)
{
	int hlf = 0, hrg = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hlf = 1 + binary_tree_heights(tree->left);
	if (tree->right)
		hrg = 1 + binary_tree_heights(tree->right);

	if (hlf > hrg)
		return (hlf);
	return (hrg);
}

/**
 * binary_tree_balance - calculates balance of a function
 *
 * @tree: tree pointer
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;

	if (tree == NULL)
		return (0);
	if (tree->left):
		hl = binary_tree_heights(tree->left) + 1;
	if (tree->right)
		hr = binary_tree_heights(tree->right) + 1;
	return (hl - hr);
}
