#include "monty.h"

// add description here

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newNode;
	(void)line_number;

	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		malloc_info();
	}

	newNode->n = gv.push_arg;
	newNode->next = *stack;
	newNode->prev = NULL;

	/** checks if the linked list is not empty **/
	if (*stack)
		(*stack)->prev = newNode;
	*stack = newNode;
}


// add discription here
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	/* sets the current pointer to point to the same location
	 * as the pointer stack 
	 * */
	current = *stack;
	for (current = *stack; current; current = current->next)
	{
		printf("%d\n", current->n);
	}
}
