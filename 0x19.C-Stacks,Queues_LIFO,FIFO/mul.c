#include "monty.h"

/* Function to multiply the second top element of the stack with the top element */
void f_mul(stack_t **head, unsigned int line_number)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n *= (*head)->n;
    f_pop(head, line_number); // Remove the top element
}

