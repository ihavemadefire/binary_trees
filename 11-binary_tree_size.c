#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - prints binary tree height
 * @tree: root of tree
 * Return: incremented count
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_size(tree->right) + 1 + binary_tree_size(tree->left));
}
