#include "binary_trees.h"


/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_f = 0, height_s = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_f = binary_tree_height(tree->left);
	height_s = binary_tree_height(tree->right);

	if (height_s >= height_f)
		return (height_s + 1);
	return (height_f + 1);
}
