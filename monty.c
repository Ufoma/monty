#include "monty.h"
/**
 * main - monty program
 * @argc: argument count
 * @argv: argument value (opcode file)
 *
 * Return: 0 else EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	FILE *file;
	char *filename = argv[2];

	if (argc != 2)
	{
		usage_info();
	}

	filename = argv[1];
	file = fopen(filename, "r");
	if (file == NULL)
	{
		file_info(filename);
	}

	fclose(file);

	return (0);
}
