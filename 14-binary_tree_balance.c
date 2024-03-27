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

	hleft = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	hright = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((hleft > hright) ? hleft : hright);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: measures the balance factor of a binary tree
 *
 * Return: balance factor of a binary tree, otheriwse 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
