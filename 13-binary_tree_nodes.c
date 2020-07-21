#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least one
 * child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null otherwise the amount of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes_l;
	int nodes_r;

	nodes_l = 0;
	nodes_r = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (0);
	nodes_l = binary_tree_nodes(tree->left);
	nodes_r = binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		nodes_r++;
	return (nodes_r + nodes_l);
}
