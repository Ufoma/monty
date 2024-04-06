#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @stack: the pointer
 * @line_number: Line number of the instruction to be executed
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	if (current == NULL)
	{
		pint_info(line_number);
	}
	printf("%d\n", current->n);
}
