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
	if (node == NULL)
		return (-1);
	int lDepth = binary_tree_height(node->left);
	int rDepth = binary_tree_height(node->right);

	if (lDepth > rDepth)
		return (lDepth + 1);
	else
		return (rDepth + 1);
}
