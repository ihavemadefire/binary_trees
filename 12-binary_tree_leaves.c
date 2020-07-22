#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - prints binary tree height
 * @tree: root of tree
 * Return: incremented count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	{
		l = binary_tree_leaves(tree->right);
		r = binary_tree_leaves(tree->left);
		return (l + r);
	}
}
