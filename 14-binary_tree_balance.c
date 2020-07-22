#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - prints binary tree height
 * @tree: root of tree
 * Return: incremented count
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right)
		r = binary_tree_balance(tree->right) + 1;
	if (tree->left)
		l = binary_tree_balance(tree->left) + 1;
	return (r - l);
}
