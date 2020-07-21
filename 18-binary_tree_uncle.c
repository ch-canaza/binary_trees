#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: null if node is null or does not have uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);

	temp = node->parent->parent;
	if (!temp->left)
		return (NULL);
	if (!temp->right)
		return (NULL);

	if (temp->left && temp->left != node->parent)
		return (temp->left);
	else if (temp->right && temp->right != node->parent)
		return (temp->right);
	return (NULL);
}
