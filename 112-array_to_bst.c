#include "binary_trees.h"
#include <stdio.h>

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array:  pointer to the first element of the array to be converted
 * @size: the number of element in the array
 * Return: pointer to the root of the created BST, or NULL on failure
 * If the value is already present in the tree, it must be ignored
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *bsTree = NULL;

	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&bsTree, array[i]);
	return (bsTree);
}
