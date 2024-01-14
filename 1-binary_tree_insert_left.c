#include "binary_trees.h"
/**
 * binary_tree_insert_left - Creates new node for binary tree.
 *
 * @parent: Parent of the new node
 * @value: Value of new node.
 *
 * Return: Pointer to the new node. On failure NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->right = NULL;
	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	if (parent->left != NULL)
	{
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);

}
