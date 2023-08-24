#include "monty.h"

/* Function to subtract the top element of the stack from the second top element */
void f_sub(stack_t **head, unsigned int line_number)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n -= (*head)->n;
    f_pop(head, line_number); // Remove the top element
}

