#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - prints binary tree height
 * @tree: root of tree
 * Return: is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i;
	int j = 0;

	i = binary_tree_depth_left(tree);
	if (tree == NULL)
		return (0);
	return (isPerf(tree, i, j));
}
/**
 * isPerf - is perf
 * @tree: tree
 * @i: i
 * @j: j
 * Return: return
 */
int isPerf(const binary_tree_t *tree, int i, int j)
{
	if (tree->left == NULL && tree->right == NULL)
		return (i == j + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (isPerf(tree->left, i, j + 1) && isPerf(tree->right, i, j + 1));
}
/**
 * binary_tree_depth_left - prints binary tree height
 * @tree: root of tree
 * Return: size from node
 */
int binary_tree_depth_left(const binary_tree_t *tree)
{
	int i = 0;

	while (tree != NULL)
	{
		i++;
		tree = tree->left;
	}
	return (i);
}
