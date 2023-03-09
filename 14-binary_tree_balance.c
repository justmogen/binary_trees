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

	int left_h = 0, right_h = 0;

	if (tree->left != NULL)
		left_h = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right_h = binary_tree_height(tree->right) + 1;

	return (left_h - right_h);
}
