#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds for the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest ancestor/ null if no ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first == second->parent)
		return (second->parent);
	if (first->parent == second->parent || first->parent
					== second->parent->parent)
		return (first->parent);
	if (second == first->parent)
		return (first->parent);
	if (second->parent == first->parent->parent)
		return (second->parent);
	return (NULL);
}
