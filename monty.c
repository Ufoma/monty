#include "monty.h"
/**
 * main - monty program
 * @argc: argument count
 * @argv: argument value (opcode file)
 *
 * Return: 0 else EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	stack_t *stack;

	stack = NULL;
	if (argc != 2)
	{
		usage_info();
	}

	readFile(argv[1], &stack);
	free_int(stack);

	return (0);
}
