/* Execute function to dispatch opcodes */
int execute(char *content, stack_t **head, unsigned int counter, FILE *file)
{
    // ... (other code)

    char *opcode = strtok(content, " \t\n");

    if (opcode == NULL)
        return 0;

    // Check if the line is a comment
    if (opcode[0] == '#')
        return 0;

    // ... (rest of the code)
}

