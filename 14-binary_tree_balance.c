#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor.
 * @tree: Pointer to the root node to measure the balance factor.
 *
 * Return: Balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0, left, right;

	if (!tree)
		return (0);

	left = get_tree_height(tree->left);
	right = get_tree_height(tree->right);
	balance_factor = left - right;

	return (balance_factor);
}

/**
 * get_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of a binary tree.
 */
int get_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (max(get_tree_height(tree->left),
		    get_tree_height(tree->right)) + 1);
}

/**
 * max - Returns the maximum of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Maximum of two integers.
 */
int max(int a, int b)
{
	return (a > b ? a : b);
}

