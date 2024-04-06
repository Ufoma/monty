#include "monty.h"

/**
 * get_opcode - Gets the function relating to an opcode
 * @str: the opcode
 *
 * Return: The function pointer or NULL if not found
 */

instruct_func get_opcode(char *str)
{
	int i;
	instruction_t instruct[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", addsub},
		{"sub", addsub},
		{"div", divmod},
		{"mod", divmod},
		{"mul", mul},
		{"nop", nop},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL},
	};
	for (i = 0; instruct[i].f != NULL && strcmp(instruct[i].opcode, str)
			!= 0; i++)
		;
	return (instruct[i].f);
}

/**
 * opcode_error - Prints usage error for opcode "push".
 * @line_number: The line number where the error occurred.
 */

void opcode_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * parse_line - Parses a line from the Monty script
 * @line: The line to be parsed
 * @stack: A pointer to the stack
 * @line_number: the line number of the instruction being executed
 *
 * Return: The opcode string
 */

char *parse_line(char *line, stack_t **stack, unsigned int line_number)
{
	char *op_code, *arg;
	const char *push = "push";
	(void)stack;

	op_code = strtok(line, "\n ");
	if (op_code == NULL)
		return (NULL);

	if (strcmp(op_code, push) == 0)
	{
		arg = strtok(NULL, "\n ");
		if (arg == NULL)
		{
			opcode_error(line_number);
		}
		if (is_integer(arg))
		{
			gv.push_arg = atoi(arg);
		}
		else
		{
			opcode_error(line_number);
		}
	}
	return (op_code);
}
