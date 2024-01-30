#include "monty.h"


/**
 * pchar - Print the ASCII value of the top element of the stack.
 * @stack: Pointer to the stack
 * @line_number: Line number where the opcode occurs
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int val;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free(gv.buffer);
		fclose(gv.file);
		free_int(*stack);
		exit(EXIT_FAILURE);
	}

	val = (*stack)->n;
	if (val > 127 || val < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free(gv.buffer);
		fclose(gv.file);
		free_int(*stack);
		exit(EXIT_FAILURE);
	}
	putchar(val);
	putchar('\n');
}

/**
 * pstr - Print the ASCII characters represented by values on the stack.
 * @stack: Pointer to the stack
 * @line_number: Line number where the opcode occurs
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	char num_str[12];
	int c = 0;
	(void)line_number;

	/* Iterate through the stack and print the corresponding ASCII characters */
	while (tmp)
	{
		c = tmp->n;

		sprintf(num_str, "%d", c);
		if (!is_integer(num_str))
			break;
		if (c < 0 || c > 127)
			break;
		putchar(c);
		tmp = tmp->next;
	}
	putchar('\n');
}
