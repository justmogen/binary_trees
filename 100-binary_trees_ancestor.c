#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second);
{
	binary_tree_t *mum, *pup;

	if (!first || !second)
		return (NULL);

	if (first == second)
	/**
	 * function returns the pointer to the node, which is cast to
	 * binary_tree_t * type. The casting is done to ensure that the return
	 * type matches the function's return type of binary_tree_t *.
	 * and not const
	 * we are returning 'first' as non-const pointer
	 */
		return ((binary_tree_t *)first);

	mum = first->parent, pup = second->parent;
	if (first == pup || !mum || (!mum->parent && pup))
		return (binary_trees_ancestor(first, pup));
	else if (mum == second || !pup || (!pup->parent && mum))
		return (binary_trees_ancestor(mum, pup));
}
