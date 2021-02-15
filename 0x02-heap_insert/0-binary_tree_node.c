#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *binary_tree_node - function to add node
 *@parent: pointer to parent
 *@value: value to be added in node
 *Return: New node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new = malloc(sizeof(binary_tree_t));

if (new == NULL)
return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;
return (new);
}
