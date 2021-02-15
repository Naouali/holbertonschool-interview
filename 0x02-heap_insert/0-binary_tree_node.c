#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new = malloc(sizeof(binary_tree_t));

    if (new == NULL)
        return NULL;

    new->n = value;
    new->parent = parent;
    return (new);
}
