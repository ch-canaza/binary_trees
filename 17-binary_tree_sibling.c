#include "binary_trees.h"

/**
 * binary_tree_sibling - find the siblings of a node
 * @node: pointer to the node to find the sibling
 * Return:null if (node or parents are null or if node has no sibling)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->left && node != node->parent->left)
		return (node->parent->left);
	if (node->parent->right && node != node->parent->right)
		return (node->parent->right);
	return (NULL);
}
