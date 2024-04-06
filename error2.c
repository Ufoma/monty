#include "monty.h"
/**
 * unknown_error - Handles unknown error
 * @c: Line number where the error occured
 * @line: The unknown instruction
 */

void unknown_error(unsigned int c, char *line)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", c, line);
	exit(EXIT_FAILURE);
}

/**
 * swap_error - Handles stack too short error for swap instruction.
 * @line_number: The line number where the error occurred.
 */

void swap_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * add_error - handles error of add instruction
 * @line_number: where the instruction is to be executed
 */

void add_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: cain't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
