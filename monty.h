#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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
void pint_info(unsigned int line_number);
void pop_info(unsigned int line_number);

/*** push_pall.c ***/
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);

/*** pint.c file ***/
void pint(stack_t **stack, unsigned int line_number);

/*** pop.c file ***/
void pop(stack_t **stack, unsigned int line_number);

typedef void (*instruct_func)(stack_t **stack, unsigned int line_number);

/*** opcode.c file ***/
instruct_func get_opcode(char *str);
void opcode_error(unsigned int line_number);
char *parse_line(char *line, stack_t **stack, unsigned int line_number);

/*** is_int.c file ***/
int is_integer(char *str);

/*** read_file.c ***/
void readFile(char *filename, stack_t **stack);

/*** free.c file ***/
void free_int(stack_t *head);

/*** error2.c file ***/
void unknown_error(unsigned int c, char *line);
void swap_error(unsigned int line_number);


/*** swap.c file ***/
void swap(stack_t **stack, unsigned int line_number);

/*** allMathFunc.c file ***/
void addsub(stack_t **stack, unsigned int line_number);
void divmod(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);

/*** nop.c file ***/
void nop(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
