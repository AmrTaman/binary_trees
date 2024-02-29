#include "binary_trees.h"

/**
 * binary_tree_delete - delete the tree.
 *
 * @tree: the tree that will be deleted
 *
 *Return: void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
	}
	else if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
		if (tree->right != NULL)
		{
		binary_tree_delete(tree->right);
		}
		free(tree);
	}
	else
	{
		binary_tree_delete(tree->right);
		if (tree->left != NULL)
		{
		binary_tree_delete(tree->left);
		}
		free(tree);
	}
}
