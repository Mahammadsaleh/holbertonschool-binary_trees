#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves in
 * Return: number of leaves, or 0 for NULL tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

