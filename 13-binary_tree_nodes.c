#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes with at least 1 child
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: Number of nodes, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		if (tree->left || tree->right)
			nodes++;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
