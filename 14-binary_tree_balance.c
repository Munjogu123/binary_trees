#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: measures the balance factor of a binary tree
 *
 * Return: balance factor of a binary tree, otheriwse 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (left - right);
}