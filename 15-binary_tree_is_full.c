#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - prints binary tree height
 * @tree: root of tree
 * Return: is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int i;
	int j;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
	{
		i = binary_tree_is_full(tree->right);
		j = binary_tree_is_full(tree->left);
		return (i && j);
	}
	return (0);
}
