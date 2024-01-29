#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

#define FAILED exit(EXIT_FAILURE)

/** Default data structure **/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_variable - opcode and its function
 * @file: the opcode
 * @push_arg: function to handle the opcode
 * @buffer: pointer
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct global_variable
{
	FILE *file;
	int push_arg;
	char *buffer;
} global_var;

extern global_var gv;

/*** error.c file ***/
int usage_info(void);
void file_info(const char *filename);
void malloc_info(void);


/*** push_pall.c ***/
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
