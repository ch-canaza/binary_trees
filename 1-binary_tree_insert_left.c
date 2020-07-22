#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node to the left side of another node
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 * Return: pointer to the new node - null on failure or
 * if parent is null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
		return (NULL);

	new_node->n = value;

	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->parent = parent;
		parent->left->parent = new_node;
		parent->left = new_node;
		new_node->right = NULL;
	}
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		return (new_node);
	}
	return (NULL);

}
