#include "binary_trees.h"

/**
 * binary_tree_delete - delete the tree
 *
 * @tree: the tree that will be deleted
 *
 *Return: void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (node->left == NULL && node->right == NULL)
	{
		free(node);
	}
	else if (node->left != NULL)
	{
		binary_tree_delete(node->left);
		if (node->right != NULL)
		{
		binary_tree_delete(node->right);
		}
		free(node);
	}
	else
	{
		binary_tree_delete(node->right);
		if (node->left != NULL)
		{
		binary_tree_delete(node->left);
		}
		free(node);
	}
}
