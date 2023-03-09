#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 * Return: The number of leaves in the tree, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/**
	 * If the input tree pointer is not NULL, the function checks if the
	 * left and right subtrees of the tree node are both NULL.
	 * If they are both NULL, the tree node is a leaf, and the
	 * function returns 1.
	 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/**
	 * If the tree node is not a leaf, the function recursively calls
	 * itself on the left and right subtrees of the tree node, and returns
	 * the sum of the returned values.
	 */
	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
