#include <binary_tree.h>

/**
 * binary_tree_insert_left - isert lift
 * 
 * @parent: the parent
 * @value: the value
 * 
 * Return: node of binary_tree_t type
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value):
{
    binary_tree_t *nude = NULL;
    
    if(parent == NULL || value == NULL)
        return (NULL);
    
    nude = malloc(binary_tree_t);
    if(nude == NULL)
        return (NULL);
    
    if(parent->left == NULL)
    {
        parent->left = nude;
        nude->n= value;
        nude->left = NULL;
        nude->right = NULL;
    }
    else
    {
        
    }
}