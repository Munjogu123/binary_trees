#include "binary_trees.h"

/**
 * max - returns the largest number
 * @a: operand 1
 * @b: operand 2
 *
 * Return: largest number
*/
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree, otherwise 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft, hright;

	if (tree == NULL)
		return (0);

	hleft = binary_tree_height(tree->left);
	hright = binary_tree_height(tree->right);

	return (max(hleft, hright) + 1);
}
