#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - prints binary tree height
 * @tree: root of tree
 * Return: incremented count
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return 0;
	}
	if (tree->right)
		r = binary_tree_height(tree->right) + 1;
	if (tree->left)
		l = binary_tree_height(tree->left) + 1;
	if (l > r)
		return (l);
	return (r);
}
