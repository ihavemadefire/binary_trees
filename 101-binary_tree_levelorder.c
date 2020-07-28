#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_levelorder - return sibling node
 * @tree: root of tree
 * @func: print function
 * Return: pointer to node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{

	int rear, front;
	const binary_tree_t **queue;
	const binary_tree_t *temp = tree;

	queue = buildQueue(&front, &rear, tree);

	while (temp)
	{
		func(temp->n);
		if (temp->left)
			push(queue, &rear, temp->left);
		if (temp->right)
			push(queue, &rear, temp->right);
		temp = pop(queue, &front);
	}
	free(queue);
}
/**
 * push - push a node to a stack
 * @queue: queue to which to be pushed
 * @rear: pointer to rear of the queue
 * @new: pointer to node to be pushed
 */
void push(const binary_tree_t **queue, int *rear, const binary_tree_t *new)
{
	queue[*rear] = new;
	(*rear)++;
}
/**
 * pop - return sibling node
 * @queue: queue to be popped
 * @front: print function
 * Return: pointer to node to be poped
 */
const binary_tree_t *pop(const binary_tree_t **queue, int *front)
{
	(*front)++;
	return (queue[*front - 1]);
}
/**
 * buildQueue - return sibling node
 * @front: root of tree
 * @rear: print function
 * @tree: tree to be measured
 * Return: double pointer to  queue
 */
const binary_tree_t **buildQueue(int *front, int *rear,
				 const binary_tree_t *tree)
{
	const binary_tree_t **queue =
		(const binary_tree_t **)malloc(sizeof(const binary_tree_t *)
					       * tree_size(tree));
	*front = *rear = 0;
	return (queue);
}
/**
 * tree_size - returns tree size
 * @tree: tree to be measured
 * Return: size of the queue
 */
int tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (tree_size(tree->right) + 1 + tree_size(tree->left));
}
