#include "monty.h"

/* Function to print the string starting at the top of the stack */
void f_pstr(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
    stack_t *current = *head;

    while (current != NULL && current->n != 0 && current->n >= 0 && current->n <= 127)
    {
        printf("%c", current->n);
        current = current->next;
    }

    printf("\n");
}

