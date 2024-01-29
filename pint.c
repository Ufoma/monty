#include "monty.h"

// add description here

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
