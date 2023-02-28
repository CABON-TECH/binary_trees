#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function that creates a binary tree node
 *
 * Description: a node doesnt have any child
 *
 * @parent: pointer to parent node of the node to create
 * @value: the value to be put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
