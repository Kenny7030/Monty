#include "monty.h"

/**
 * add_node_to_stack - Add a new node to the head of the stack.
 * @stack_head: Pointer to the head of the stack.
 * @value: Value to be stored in the new node.
 *
 * This function creates a new node with the given value and adds it to the
 * head of the stack. It also updates the previous pointer of the previous
 * head node to point to the new node.
 */
void add_node_to_stack(stack_t **stack_head, int value)
{
    stack_t *new_node, *current_head;

    current_head = *stack_head;

    // Allocate memory for the new node
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        printf("Error\n");
        exit(EXIT_FAILURE);
    }

    // Update the previous pointer of the old head, if it exists
    if (current_head)
        current_head->prev = new_node;

    // Initialize the new node's values
    new_node->n = value;
    new_node->next = *stack_head;
    new_node->prev = NULL;

    // Update the stack head pointer to point to the new node
    *stack_head = new_node;
}

