#include "monty.h" 
global_var gv;
// fix betty error
// usage_info - print usage error
// Return: exit_failure


int usage_info(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	FAILED;
}

// add description for file_info function

void file_info(const char *filename)
{
	fprintf(stderr, "can't open file %s\n", filename);
	FAILED;
}

// add description for malloc_info

void malloc_info(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	FAILED;
}

// add description for pint_info

void pint_info(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	FAILED;
}
