#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
bst_t *bst_insert(bst_t **tree, int value)
{

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		return (binary_tree_node(NULL, value));
	}
	else
		return (bst_insert_guts(*tree, value));
}

bst_t *bst_insert_guts(bst_t *node, int value)
{
	if (node->n == value)
		return (NULL);
	if (node == NULL)
	{
		return (binary_tree_node(node, value));
	}
	if (value < node->n)
		node->left = bst_insert_guts(node->left, value);
	else
		node->right = bst_insert_guts(node->right, value);
	return (node);
}
