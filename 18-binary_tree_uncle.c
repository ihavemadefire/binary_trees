#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - return sibling node
 * @node: root of tree
 * Return: pointer to node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == NULL)
		return (NULL);
	if (node->parent->parent->right == NULL)
		return (NULL);
	if (node->parent->parent->left->n == node->parent->n)
		return (node->parent->parent->right);
	return (node->parent->parent->left);

}
