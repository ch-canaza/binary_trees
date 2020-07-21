#include "binary_trees.h"
#include <stdio.h>

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

	l_height = binary_tree_height(tree->left) + 1;
	r_height = binary_tree_height(tree->right) + 1;

	if (r_height > l_height)
		return (r_height);
	return (l_height);
}

/**
 * binary_tree_balance - function that measures the balance factor of
 * a binary tree
 * @tree: pointer to the root node of the tree to measure
 * the balance
 * Return: 0 if  tree is null or the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	height_l = 0;
	height_r = 0;
	if (!tree)
		return (-1);
	if (!tree->left && !tree->right)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	return (height_l - height_r);
}
