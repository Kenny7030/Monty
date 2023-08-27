#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Pointer to the stack's head node.
 * @counter: Line number being executed.
 *
 * Description: This function pops the top two elements from the stack,
 * adds them together, and pushes the result back onto the stack.
 * If the stack has fewer than 2 elements, it displays an error message
 * and exits the program with a failure status.
 */
void f_add(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, sum;

    h = *head;

    // Count the number of elements in the stack
    while (h)
    {
        h = h->next;
        len++;
    }

    // Check if there are at least 2 elements to add
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    // Retrieve the values of the top two elements
    h = *head;
    sum = h->n + h->next->n;

    // Update the second element's value and remove the first element
    h->next->n = sum;
    *head = h->next;
    free(h);
}

