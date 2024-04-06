#include "monty.h"
global_var gv;
/**
* usage_info - print usage error
*
* Return: Returns EXIT_FAILURE
*/

int usage_info(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	FAILED;
}

/**
 * file_info - Prints file opening error message
 * @filename: the name of the file that refused to open
 */

void file_info(const char *filename)
{
	fprintf(stderr, "can't open file %s\n", filename);
	FAILED;
}

/**
 * malloc_info - Prints malloc error message
 *
 * Description: Prints an error message when malloc fails to allocate memory
 * and then exits with EXIT_FAILURE
 */

void malloc_info(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	FAILED;
}

/**
 * pint_info - Prints info error message for pint
 * @line_number: Line number where error occurred
 */

void pint_info(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	FAILED;
}

/**
 * pop_info - Prints info error message for pop
 * @line_number: Line number where error occurred
 */

void pop_info(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stak\n", line_number);
	FAILED;
}
