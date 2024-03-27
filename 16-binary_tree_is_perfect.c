#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree, otherwise 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;

	if (tree == NULL)
		return (0);

	hleft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	hright = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((hleft > hright) ? hleft : hright);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of binary tree, otherwise 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if binary tree is perfect, otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nodes_actual, res = 1;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	while ((height + 1) != 0)
	{
		res *= 2;
		--height;
	}
	res -= 1;
	nodes_actual = binary_tree_size(tree);

	if (res == nodes_actual)
		return (1);

	return (0);
}
