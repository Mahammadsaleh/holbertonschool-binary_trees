#include "binary_trees.h"
/**
 * binary_trees_ancestor -something
 * @first: first
 * @second: second
 *
 * Return: tree
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *p1, *p2;

	p1 = (binary_tree_t *)first;

	while (p1)
	{
		p2 = (binary_tree_t *)second;
		while (p2)
		{
			if (p2->n == p1->n)
				return (p2);
			p2 = p2->parent;
		}
		p1 = p1->parent;
	}

	return (NULL);
}
