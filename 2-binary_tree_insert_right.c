#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a bt node
 * @parent: parent node
 * @value: value
 * Return: pointer to tree node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *temp;

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->n = value;
	}
	return (new_node);
}
