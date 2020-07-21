#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function rthat checs if a binary tree is perfect
 * @tree: pointer to  the root node of the tree to check
 * Return: 0 if tree is null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int dr;
	int dl;

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

	dr = binary_tree_is_perfect(tree->left);
	dl = binary_tree_is_perfect(tree->right);

	if (dl == 0 || dr == 0)
		return (0);
	else if (dl == dr)
		return (1);
	return (0);
}
