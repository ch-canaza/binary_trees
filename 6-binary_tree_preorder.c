#include "binary_trees.h"
#include "stdio.h"
/**
 * binary_tree_preorder - function that goes throug a binary tree
 * using preorder traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call each node. the value of this
 * node must be passed as an argument to the function
 *
 * return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
