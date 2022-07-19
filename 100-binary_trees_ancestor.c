#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_trees_ancestor - finds lowest common ancestor of two nodes
 * @first: first reference node
 * @second: second reference node
 *
 * Return: pointer to lowest common ancestor node or NULL
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	if ((!first) || (!second))
		return (NULL);

	if (first->parent == second->parent)
		return (first->parent);

	if (first == second->parent)
		return ((binary_tree_t *)first);

	return (binary_trees_ancestor(first, second->parent));
}
