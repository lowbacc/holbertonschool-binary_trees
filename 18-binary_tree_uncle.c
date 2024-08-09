#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 *         the parent is NULL, or the node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node
 * Return: Pointer to the uncle node, or NULL if node is NULL,
 *         the parent is NULL, or the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
