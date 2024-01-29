#include "monty.h"

// fix betty error
// usage_info - print usage error
// Return: exit_failure


int usage_info(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

// add description for file_info function

void file_info(const char *filename)
{
	fprintf(stderr, "can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}
