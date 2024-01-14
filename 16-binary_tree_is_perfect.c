#include "binary_trees.h"

size_t get_depth(const binary_tree_t *tree);
int is_perfect(const binary_tree_t *tree, size_t level, size_t depth);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = get_depth(tree);

	if (!tree)
		return (0);

	return (is_perfect(tree, 0, depth));
}

/**
 * is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * @level: Depth of the current node.
 * @depth: Depth of the deepest node.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int is_perfect(const binary_tree_t *tree, size_t level, size_t depth)
{
	if (!tree->left && !tree->right)
		return (level == depth);

	if (!tree->left || !tree->right)
		return (0);

	level += 1;
	return (is_perfect(tree->left, level, depth) &&
		   is_perfect(tree->right, level, depth));
}

/**
 * get_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 * @depth: Current depth.
 *
 * Return: Depth of the node, 0 if tree is NULL.
 */
size_t get_depth(const binary_tree_t *tree)
{
	binary_tree_t *node = (binary_tree_t *)tree;
	size_t depth = 0;

	while (node)
	{
		depth += 1;
		node = node->left;
	}
	return (depth - 1);
}

