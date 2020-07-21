#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to the right side of another node
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 * Return: pointer to the new node - null on failure or
 * if parent is null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->parent = parent;
		parent->right->parent = new_node;
		parent->right = new_node;
		new_node->left = NULL;
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;
	}
	return (new_node);
}
