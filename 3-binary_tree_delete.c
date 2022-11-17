#include "binary_trees.h"
/**
 *  binary_tree_delete - deletes the tree
 *  @tree: is the pointer to the tree node
 *  Return: 0 if an error occures - NULL
 */


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_delete(tree->left);
	/*Delete right sub-tree */
	binary_tree_delete(tree->right);
	/* delete root node */
	printf("Deleteing Node : %d\n", tree->n);
	free(tree);
}
