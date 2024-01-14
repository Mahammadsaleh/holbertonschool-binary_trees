#include "binary_trees.h"
/**
 * binary_tree_node - Creates new node for binary tree.
 *
 * @parent: Parent of the new node
 * @value: Value of new node.
 *
 * Return: Pointer to the new node. On failure NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);

}
