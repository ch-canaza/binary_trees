#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leavess in a binary tree
 * @tree: pointer to the root of the binary tree to count the number of leaves
 * Return: number of leaves or 0 if tree is null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves_l;
	int leaves_r;

	if (!tree)
		return (0);

	leaves_l = 0;
	leaves_r = 0;

	leaves_l = binary_tree_leaves(tree->left);
	leaves_r = binary_tree_leaves(tree->right);

	if (!(tree->left) && !(tree->right))
		leaves_l++;
	return (leaves_l + leaves_r);
}
