#include "binary_trees.h"
#include <stdio.h>

/**
 * bst_search -  searches for a value in a Binary Search Tree
 * @tree: pointer to the root node of the BST to search
 * @value: value to search in the tree
 * Return: pointer to the node containing a value
 * If tree is NULL or if nothing is found, return NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (value == tree->n)
		return ((bst_t *)tree);

	if (value < tree->n) /*Go to left branch*/
		return (bst_search(tree->left, value));
	if (value > tree->n) /*Go to right branch*/
		return (bst_search(tree->right, value));

	return (NULL);
}
