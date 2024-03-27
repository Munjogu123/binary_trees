#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if binary tree is full, otherwise 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	bool res;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
	res = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);

	if (res == true)
		return (1);

	return (0);
}
