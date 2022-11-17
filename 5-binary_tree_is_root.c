#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_is_root - This function that checks if a given node is a root
 *  @node: node is a pointer to the node to check
 *  Return: 0 if node is NULL
 */


int binary_tree_is_root(const binary_tree_t *node)
{
	/* Returns if tree is NULL */
	if (node == NULL)
	return (0);

	/*checks if Node->parent point to NULL */
	if (node->parent == NULL)
	return (1);
	else
	return (0);
}
