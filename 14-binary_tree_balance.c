#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root of the tree
 * Return: + meaning tree has more left childrens, - meean right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hright = 0, hleft = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		hright = binary_tree_balance(tree->right) + 1;
	if (tree->left)
		hleft = binary_tree_balance(tree->left) + 1;

	if (hright > hleft)
		return ((hright - hleft) * (-1));
	else
		return (hleft - hright);
}
