#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/**
	 * function checks if the tree node is a leaf (i.e., it has
	 * no children). If it is, the function returns 1, indicating that the
	 * tree is full.
	 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/**
	 * If the tree node is not a leaf, the function checks if it has both
	 * a left and right child. If it does, the function recursively checks
	 * if both the left and right subtrees are full, using the
	 * binary_tree_is_full function. If both subtrees are full, the
	 * function returns 1, indicating that the tree is full.
	 */
	if (tree->left != NULL && tree->right != NULL)
		return binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right);
	return (0);
}
