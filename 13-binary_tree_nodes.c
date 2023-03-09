#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: The number of nodes with at least 1 child in the tree,
 * or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodez = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodez++;

	/**
	 * If the tree node has at least 1 child (i.e., either its left or
	 * right pointer is not NULL), then it increments the nodes counter by
	 * 1, and recursively calls itself on both its left and right children
	 * to count the total number of nodes with at least 1 child in
	 * the subtree rooted at this node.
	 */
	nodez += binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);

	return (nodez);
}
