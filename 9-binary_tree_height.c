#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - prints binary tree height
 * @tree: root of tree
 * @func: function pointer
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
	{
		return 0;
	}
	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);
	if (l > r)
		return (l + 1);
	return (r + 1);
}
