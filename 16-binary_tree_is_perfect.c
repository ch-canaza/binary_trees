#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: if tree is null return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height;
	int r_height;

	l_height = 0;
	r_height = 0;
	if (!tree)
		return (0);
	if (!(tree->right) && !(tree->left))
		return (0);

	l_height = binary_tree_height(tree->left) + 1;
	r_height = binary_tree_height(tree->right) + 1;

	if (r_height > l_height)
		return (r_height);
	return (l_height);
}

/**
 * binary_tree_is_perfect - function that checs if a binary tree is perfect
 * @tree: pointer to  the root node of the tree to check
 * Return: 0 if tree is null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int dr, dl;

	dr = 0;
	dl = 0;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left && tree->right)
		return (0);
	if (tree->left && !tree->right)
		return (0);

	dr = binary_tree_height(tree->left);
	dl = binary_tree_height(tree->right);
	if (dl == dr)
	{
		if (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
