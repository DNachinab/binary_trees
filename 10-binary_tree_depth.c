#include "binary_trees.h"

/**
 * binary_tree_depth - defined node's depth from the root
 * @tree: node to measure the depth
 * Return: The number 0 represents the root or depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}