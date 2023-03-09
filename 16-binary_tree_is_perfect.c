#include "binary_trees.h"
/**
 * binary_tree_is_perfect - binary_tree_is_perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is a perfect binary tree, 1, otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h == right_h)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
