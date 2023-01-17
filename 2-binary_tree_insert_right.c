#include "binary_trees.h"

/**
 * binary_tree_insert_right -  creates a right child for parent
 * @parent:  is a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 * Return:  a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
	}
	parent->right = right_child;

	return (right_child);
}
