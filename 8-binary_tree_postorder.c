#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes troug a binary tree
 * using post ordertraversal
 * @tree: pointer to the root node to tree to traverse
 * @func: pointer to a function to call for each node.
 * the value in the node must be pased as a parameter to this function
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
