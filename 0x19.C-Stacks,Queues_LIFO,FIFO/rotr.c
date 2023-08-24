#include "monty.h"

/* Function to rotate the stack to the bottom */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
    if (*head == NULL || (*head)->next == NULL)
        return; // Nothing to rotate if there are less than 2 elements

    stack_t *last = *head;
    while (last->next != NULL)
        last = last->next;

    // Update pointers to perform rotation
    last->prev->next = NULL;
    last->prev = NULL;
    last->next = *head;
    (*head)->prev = last;
    *head = last;
}

