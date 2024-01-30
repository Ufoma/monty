#include "monty.h"

//add description

void addsub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int result = 0, n = 0;
	int is_sub = 0;

	if (!tmp)
	{
		fprintf(stderr, "L%d: can't %s, stack too short\n",
				line_number, is_sub ? "sub" : "add");
		exit(EXIT_FAILURE);
	}

	while (tmp)
	{
		tmp = tmp->next;
		n++;
	}

	if (stack == NULL || (*stack)->next == NULL || n <= 1)
	{
		fprintf(stderr, "L%d: can't %s, stack too short\n",
				line_number, is_sub ? "sub" : "add");
		exit(EXIT_FAILURE);
	}

	if (is_sub)
		result = (*stack)->next->n - (*stack)->n;
	else
		result = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = result;
}

// add description

void divmod(stack_t **stack, unsigned int line_number)
{
	int divisor = 0;
	int is_mod = 0; 
  
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't perform operation, stack too short\n",
				line_number);
		free(gv.buffer);
		fclose(gv.file);
		free_int(*stack);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		/* Check for division by zero */
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free(gv.buffer);
		fclose(gv.file);
		free_int(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		divisor = (*stack)->n;
		pop(stack, line_number);
		if (is_mod)
			(*stack)->n %= divisor;
		else
			(*stack)->n /= divisor;
	}
}


// add description

void mul(stack_t **stack, unsigned int line_number)
{
	int a;

	/* Check if there are enough elements in the stack for multiplication */
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		free(gv.buffer);
		fclose(gv.file);
		free_int(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		/* Perform multiplication and update the stack */
		a = (*stack)->n;
		pop(stack, line_number);
		(*stack)->n *= a;
	}
}
