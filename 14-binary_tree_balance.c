#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 *
 * The balance factor of a binary tree is defined as the difference between
 * the heights of its left and right subtrees. A binary tree is considered
 * balanced if the balance factor is -1, 0, or 1. If the balance factor is
 * less than -1 or greater than 1, the tree is unbalanced.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_h = binary_tree_height(tree->left);
	int right_h = binary_tree_height(tree->right);


	return (left_h - right_h);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: The height of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_h = binary_tree_height(tree->left);
	size_t right_h = binary_tree_height(tree->right);

	return (1 + ((left_h > right_h) ? left_h : right_h));
}
