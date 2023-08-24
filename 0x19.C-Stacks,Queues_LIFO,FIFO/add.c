#include "monty.h"

/* Function to add the top two elements of the stack */
void f_add(stack_t **head, unsigned int line_number)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n += (*head)->n;
    f_pop(head, line_number); // Remove the top element
}

