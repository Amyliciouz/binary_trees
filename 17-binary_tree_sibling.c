#include "binary_trees.h"
/**
* binary_tree_sibling - a function to find a sibling of a node
* @node: the node to check
* Return: pointer to sibling or null if there is no sibling found
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
	return (NULL);
	if (node->parent->left == node)
	return (node->parent->right);
	return (node->parent->left);
}
