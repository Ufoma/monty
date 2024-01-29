#include "monty.h"

// add your description here

instruct_func get_opcode(char *str)
{
	int i;
	instruction_t instruct[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL},
	};
	for (i = 0; instruct[i].f != NULL && strcmp(instruct[i].opcode, str) != 0; i++)
		;
	return (instruct[i].f);
}

// add your description here

void opcode_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}
// add your description here

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
