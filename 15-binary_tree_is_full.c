#include "binary_trees.h"

/*
 * binary_tree_is_full - checks fullness of a tree
 *
 * @tree: pointer of tree
 *
 * Return: integr
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left ^ right)
		return (1);
	return (0);	
}
