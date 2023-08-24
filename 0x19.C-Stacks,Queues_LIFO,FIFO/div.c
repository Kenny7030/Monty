#include "monty.h"

/* Function to divide the second top element of the stack by the top element */
void f_div(stack_t **head, unsigned int line_number)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n /= (*head)->n;
    f_pop(head, line_number); // Remove the top element
}

