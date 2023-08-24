#include "monty.h"

/* Function to push an element onto the stack */
void f_push(stack_t **head, unsigned int line_number)
{
    char *arg = bus.arg; // The argument after the push opcode

    if (arg == NULL || !isdigit(*arg))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    int num = atoi(arg);
    addnode(head, num); // Add the integer to the stack
}
/* Function to print all values on the stack */
void f_pall(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
    stack_t *current = *head;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

