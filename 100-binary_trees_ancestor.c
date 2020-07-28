#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - binary_trees_ancestor
 * @first: first
 * @second: second
 * Return: return
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *tree = (binary_tree_t *)first;

	if (first == NULL || second  == NULL)
		return (NULL);

	while (tree->parent != NULL)
	{

		tree = tree->parent;
	}
	if (binary_value_srch(tree, second->n) == 0)
		return (NULL);
	return (binary_trees_ancestor_shell(tree, first, second));
}

/**
 * binary_trees_ancestor_shell - binary_trees_ancestor
 * @tree: tree
 * @first: first
 * @second: second
 * Return: return
 */
binary_tree_t *binary_trees_ancestor_shell(binary_tree_t *tree,
const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *l;
	binary_tree_t *r;

	if (tree == NULL)
		return (NULL);

	if (tree->n == first->n || tree->n == second->n)
		return (tree);
	l = binary_trees_ancestor_shell(tree->left, first, second);
	r = binary_trees_ancestor_shell(tree->right, first, second);

	if (l != NULL && r != NULL)
		return (tree);
	else if (l != NULL)
		return (l);
	else
		return (r);
}
/**
 *
 *
 *
 */
int binary_value_srch(const binary_tree_t *tree, int i)
{
	int k;
	int l;

	if (tree == NULL)
		return (0);

	if (tree->n == i)
		return (1);

	k = binary_value_srch(tree->left, i);

	if (k)
		return 1;
	l = binary_value_srch(tree->right, i);
	return l;
}
