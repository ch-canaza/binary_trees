
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth or 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	depth = 0;
	if (!tree)
		return (0);
	if (!(tree->parent))
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;
		return (depth);
}
