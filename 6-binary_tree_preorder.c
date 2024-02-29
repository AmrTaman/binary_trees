#include "binary_trees.h"

/**
 * binary_tree_preorder - prints values of nodes in preorder
 *
 * @tree: binary tree pointer
 * @func: function of type integer
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

