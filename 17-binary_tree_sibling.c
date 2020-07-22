#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - return sibling node
 * @node: root of tree
 * Return: pointer to node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	return (node->parent->left);

}
