#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}


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
	int depthfirst, depthsecond;

	if ((!first) || (!second))
		return (NULL);

	depthfirst = binary_tree_depth(first);
	depthsecond = binary_tree_depth(second);

	while (depthfirst != depthsecond)
	{
		if (depthfirst > depthsecond)
		{
			depthfirst -= 1;
			first = first->parent;
		}
		else
		{
			depthsecond -= 1;
			second = second->parent;
		}
	}

	while (first->n != second->n)
	{
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}
