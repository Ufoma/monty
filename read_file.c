#include "monty.h"

/**
 * readFile - Reads a monty file script and executes its instructions
 * @filename: name of the monty file
 * @stack: Pointer to the stack
 */


void readFile(char *filename, stack_t **stack)
{
	char *line;
	size_t i;
	int c, check, read;
	instruct_func s;

	i = 0;
	c = 1;
	gv.file = fopen(filename, "r");

	if (!gv.file)
	{
		file_info(filename);
	}

	for (
			c = 1;
			(read = getline(&gv.buffer, &i, gv.file)) != -1;
			c++
		)
	{
		line = parse_line(gv.buffer, stack, c);

		if (line == NULL || line[0] == '#')
		{
			continue;
		}

		s = get_opcode(line);

		if (!s)
		{
			unknown_error(c, line);
		}

		s(stack, c);
	}
	free(gv.buffer);
	check = fclose(gv.file);
	if (check == -1)
		exit(-1);
}
