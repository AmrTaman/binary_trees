#include "binary_trees.h"

/**
 * binary_tree_postroder - prints values of nodes in preorder
 *
 * @tree: binary tree pointer
 * @func: function of type integer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postroder(tree->left, func);
	(*func)(tree->n);
	binary_tree_postroder(tree->right, func);
}
