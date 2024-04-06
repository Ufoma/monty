#include "monty.h"
/**
 * is_integer - Checks if a string represents a valid integer
 * @str: The string to be checked
 *
 * Return: returns 1 if integer is valid; 0 otherwise.
 */

int is_integer(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);
	if (str[i] == '-')
	{
		i++;
		if (str[i] == '\0')
			return (0);
	}
	for (; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
