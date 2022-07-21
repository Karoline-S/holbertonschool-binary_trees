#include "binary_trees.h"
#include <stdio.h>

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root of BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: a pointer to the created node, or NULL on failure
 * If tree is NULL, created a root node
 * If the value is already present in the tree, it must be ignored
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL) /*Nil address*/
		return (NULL);

	if (*tree == NULL) /*Nil node*/
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}
	printf("It got here");
	if (value == (*tree)->n)/*check if value already exist at this node*/
		return (NULL);
	if (value < (*tree)->n) /*Go to left branch*/
	{
		if ((*tree)->left == NULL)/*At the end of branch*/
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		return (bst_insert(&((*tree)->left), value));
	}
	else /*Go to right branch*/
	{
		if ((*tree)->right == NULL)/*At the end of branch*/
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		return (bst_insert(&((*tree)->right), value));
	}
	return (NULL);
}
