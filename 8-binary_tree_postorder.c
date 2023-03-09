#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through binary tree using post-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(node->left, func);
	binary_tree_postorder(node->right, func);
	func(tree->n);
}
