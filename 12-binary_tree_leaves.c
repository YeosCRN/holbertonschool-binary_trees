#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaves
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: Number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		if (!tree->left && !tree->right)
			leaves++;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
