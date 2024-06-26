#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	if (stack == NULL || *stack == NULL)
	{
		pop_info(line_number);
	}

	*stack = node->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(node);
}
