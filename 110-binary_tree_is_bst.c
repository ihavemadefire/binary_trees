#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <limits.h>

/**
 * binary_tree_is_bst - is bst
 * @tree: to be validated
 * Return: 1 or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int min = INT_MIN;
	int max = INT_MAX;

	if (tree == NULL)
		return (0);
	return (binary_tree_is_bst_shunt(tree, min, max));
}
/**
 * binary_tree_is_bst_shunt - is bst
 * @tree: to be validated
 * @min: min
 * @max: max
 * Return: 1 or 0
 */
int binary_tree_is_bst_shunt(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n < min)
		return (0);
	if (tree->n > max)
		return (0);
	return (binary_tree_is_bst_shunt(tree->right, tree->n + 1, max) &&
	binary_tree_is_bst_shunt(tree->left, min, tree->n - 1));
}
