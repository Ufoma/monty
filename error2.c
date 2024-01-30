#include "monty.h"
// add descrioption

void unknown_error(unsigned int c, char *line)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", c, line);
	exit(EXIT_FAILURE);
}
