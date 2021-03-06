#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a bt node
 * @parent: parent node
 * @value: value
 * Return: pointer to tree node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->n = value;
	}
	return (new_node);
}
