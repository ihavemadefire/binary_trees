#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - prints binary tree height
 * @tree: root of tree
 * Return: incremented count
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);
	if (l > r)
		return (l + 1);
	return (r + 1);
}
/**
 * binary_tree_balance - calculates balance
 * @tree: root of tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return(binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
