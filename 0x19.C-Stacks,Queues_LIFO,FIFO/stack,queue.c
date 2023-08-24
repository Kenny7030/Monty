#include "monty.h"

/* Global variable to track the current mode: 0 for stack, 1 for queue */
int mode = 0;

/* Function to switch the mode between stack and queue */
void f_stack(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
    (void)head; // Unused parameter

    mode = 0; // Set mode to stack
}

/* Function to switch the mode between stack and queue */
void f_queue(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
    stack_t *current = *head;

    // If the stack is empty or already in queue mode, nothing to do
    if (current == NULL || mode == 1)
        return;

    // Find the last node
    while (current->next != NULL)
        current = current->next;

    // Update pointers to switch mode
    current->next = *head;
    (*head)->prev = current;
    *head = (*head)->next;
    (*head)->prev = NULL;

    mode = 1; // Set mode to queue
}

