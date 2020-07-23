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
 * levelorder - recursively perform a function on a binary tree
 * in order to traverse it using level order
 * @tree: tree
 * @i: index of level
 * @func: function to perform
 */

void levelorder(const binary_tree_t *tree, size_t i, void(*func)(int))
{
	
	if (i == 1)
		func(tree->n);
	else if (i > 1)
	{
		levelorder(tree->left, i - 1, func);
		levelorder(tree->right, i - 1, func);
	}
	else
		return;
}
/**
 * binary_tree_level_order - function goes trough a binary 
 * tree using level order traversal
 * @tree: pointer to the root node 
 * @func: pointer to a function to call each node 
 * Return: nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, h;

	if (!tree || !func)
		return;
	h = binary_tree_height(tree);
	for (i = 0; i <= h + 1; i++)
		levelorder(tree, i, func);
}
