#include "binary_trees.h"
/**
 * binary_tree_is_root - check root
 *
 * @node: node
 *
 * Return: if true 1, else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
