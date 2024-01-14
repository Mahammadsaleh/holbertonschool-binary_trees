#include "binary_trees.h"
/**
 * binary_tree_height - find binary tree height
 *
 * @node: binary tree
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *node)
{
	int lDepth;
	int rDepth;

	if (node == NULL || (node->left == NULL && node->right == NULL))
		return (-1);
	lDepth = binary_tree_height(node->left);
	rDepth = binary_tree_height(node->right);

	if (lDepth > rDepth)
		return (lDepth + 1);
	else
		return (rDepth + 1);
}
