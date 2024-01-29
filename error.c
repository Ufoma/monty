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

void malloc_info(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	FAILED;
}
