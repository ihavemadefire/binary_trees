#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - prints binary tree height
 * @tree: root of tree
 * Return: incremented count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t ret = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left || tree->right)
		ret++;
	ret += (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
	return (ret);
}
