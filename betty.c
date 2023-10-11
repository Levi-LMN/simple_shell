/**
 * print_hello - Prints "Hello, World!" to the standard output
 */
void print_hello(void)
{
    char *message = "Hello, World!"; /* Message to be printed */

    /*
     * Print the message to the standard output
     */
    printf("%s\n", message);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char **argv)
{
    if (argc == 1)
    {
        print_hello(); /* Call the print_hello function */
        return 0; /* Exit the program successfully */
    }
    else
    {
        printf("Usage: %s\n", argv[0]); /* Print usage message */
        return 1; /* Exit with an error code */
    }
}

