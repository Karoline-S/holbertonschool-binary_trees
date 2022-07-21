#include "binary_trees.h"
#include <stdio.h>
#include <limits.h>


/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (_isBST(tree, INT_MIN, INT_MAX));
}

/**
 * _isBST - recursion to check each node to determine if BST
 * @node: a pointer to the node of the tree to check
 * @min: min num
 * @max: max num
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int _isBST(const binary_tree_t *node, int min, int max)
{
	if (node == NULL)
		return (1);
	if (node->n < min || node->n > max)
		return (0);

	return (_isBST(node->left, min, node->n - 1) &&
	_isBST(node->right, node->n + 1, max));
}
