#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - prints binary tree height
 * @tree: root of tree
 * Return: size from node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	else
		return (0);
}
