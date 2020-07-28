#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
/*Typedefs*/
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s heap_t;
typedef struct binary_tree_s avl_t;

/*Definitions*/
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
int isPerf(const binary_tree_t *tree, int i, int j);
int binary_tree_depth_left(const binary_tree_t *tree);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second);
binary_tree_t *binary_trees_ancestor_shell(binary_tree_t *tree,
					   const binary_tree_t *first,
					   const binary_tree_t *second);
int binary_tree_is_bst(const binary_tree_t *tree);
int binary_tree_is_bst_shunt(const binary_tree_t *tree, int min, int max);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *bst_insert_guts(bst_t *node, int value);
int binary_value_srch(const binary_tree_t *tree, int value);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
void push(const binary_tree_t **queue, int *rear, const binary_tree_t *new);
const binary_tree_t *pop(const binary_tree_t **queue, int *front);
const binary_tree_t **buildQueue(int *front, int *rear, const binary_tree_t *tree);
int tree_size(const binary_tree_t *tree);
#endif
