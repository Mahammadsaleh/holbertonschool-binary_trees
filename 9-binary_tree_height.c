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
	size_t lHeight;
	size_t rHeight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);

	return ((lHeight > rHeight ? lHeight : rHeight) + 1);
}
