#include "monty.h"
// add descrioption

void unknown_error(unsigned int c, char *line)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", c, line);
	exit(EXIT_FAILURE);
}

void swap_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

void add_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: cain't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
