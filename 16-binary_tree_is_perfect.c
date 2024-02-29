#include "binary_trees.h"

size_t binary_tree_height1(const binary_tree_t *tree);
size_t binary_tree_size1(const binary_tree_t *tree);
size_t mypow(unsigned int x,unsigned int n);

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: binary tree pointer
 *
 * Return: 1 if the tree is perfect or zero if the tree is NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = binary_tree_height1(tree);

	if (tree == NULL)
		return (0);

	if (binary_tree_size1(tree) == (mypow(2, (h + 1))) - 1)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height1 - gives the hight of a tree
 *
 * @tree: binary tree pointer
 *
 * Return: size_t number or zero if function fails
 */
size_t binary_tree_height1(const binary_tree_t *tree)
{
	size_t hlf = 0, hrg = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hlf = 1 + binary_tree_height1(tree->left);
	if (tree->right)
		hrg = 1 + binary_tree_height1(tree->right);

	if (hlf > hrg)
		return (hlf);
	return (hrg);
}

/**
 * binary_tree_size1 - gives the size of a tree
 *
 * @tree: binary tree pointer
 *
 * Return: size_t number or zero if function fails
 */
size_t binary_tree_size1(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size = binary_tree_size1(tree->left) + 1;
	size = binary_tree_size1(tree->right) + size;
	return (size);
}

/**
 * mypow - gives the size of a tree
 *
 * @x: first number
 * @n: second number
 *
 * Return: int number 
 */

size_t mypow(unsigned int x,unsigned int n)
{
    unsigned int i; 
    unsigned int number = 1;

    for (i = 0; i < n; ++i)
        number *= x;

    return(number);
}
