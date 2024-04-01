#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: pointer
 * @line_number: The line number of the instruction being executed.
 *
 * Description: If the stack contains less than two it prints error.
 */

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
