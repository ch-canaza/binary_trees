#include "binary_trees.h"

/**
 * binary_tree_size - function tha measures the size of a binary tree
 * @tree: pointer to the root node to measure the size
 * Return: if tree is null must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_l;
	int size_r;

	if (!tree)
		return (0);

	size_l = 0;
	size_r = 0;

	size_r = binary_tree_size(tree->right) + 1;
	size_l = binary_tree_size(tree->left);
	return (size_l + size_r);
}
