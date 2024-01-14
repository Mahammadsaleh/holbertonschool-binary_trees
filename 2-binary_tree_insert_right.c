#include "binary_trees.h"
/**
 * binary_tree_insert_right - Creates new node for binary tree.
 *
 * @parent: Parent of the new node. If null new node
 * @value: Value of new node.
 *
 * Return: Pointer to the new node. On failure NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->left = NULL;
	new->n = value;
	new->right = parent->right;
	if (parent->right != NULL)
	{
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
