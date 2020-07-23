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
	binary_tree_t *temp1, *temp2;

	if (!first || !second)
		return (NULL);

		if (first == second->parent)
			return (second->parent);
		if (second == first->parent)
			return (first->parent);
		temp1 = first->parent;
		temp2 = second->parent;
		while (first)
		{
			while (second)
			{
				if (temp1 == temp2)
					return (temp1);
			temp2 = temp2->parent;
			}
			temp1 = temp1->parent;

		}
	return (NULL);
}
