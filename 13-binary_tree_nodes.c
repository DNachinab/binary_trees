#include "binary_trees.h"

/**
 * binary_tree_nodes - functto  returns number of 
 * child-bearing nodes in a tree
 * 
 * @tree: tree to check
 * Return: number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->left || tree->right) ? 1 : 0);
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}