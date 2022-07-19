#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		height = binary_tree_depth(tree->parent) + 1;

	return (height);
}
