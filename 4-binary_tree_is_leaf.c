#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check leaf
 *
 * @node: node
 *
 * Return: if true 1, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
