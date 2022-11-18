#include "binary_trees.h"
/**
* binary_tree_uncle - function to find uncle of a node
* @node: pointer to uncle node
* Return: pointer to uncle a node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL  || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);
	if (node->parent == node->parent->parent->left)
	return (node->parent->parent->right);
	return (node->parent->parent->left);
}
