#include "monty.h"
// add description

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	int temp;

	current = *stack;
	if (current == NULL || current->next == NULL)
	{
		swap_error(line_number);
	}
	temp = current->n;
	current->n = current->next->n;
	current->next->n = temp;
}
