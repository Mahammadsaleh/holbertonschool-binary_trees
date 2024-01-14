#include "binary_trees.h"
/**
 * binary_tree_height - find binary tree height
 *
 * @tree: binary tree
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	size_t lHeight = binary_tree_height(tree->left);
	size_t rHeight = binary_tree_height(tree->right);

	return (lHeight > rHeight ? lHeight : rHeight) + 1;
}
