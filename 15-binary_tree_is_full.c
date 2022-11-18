#include "binary_trees.h"
/**
* binary_tree_is_full - checks if binary tree is full.
* @tree: has either two or no children.
* Return: 1 if the tree is full an 0 if not full.
*/


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
	if ((!tree->left) && (!tree->right))
	return (1);
	if ((tree->left) && (tree->right))
	{
	return (binary_tree_is_full(tree->left) &&
	binary_tree_is_full(tree->right));
	}	
	else
	return (0);							}
	return (0);
}
