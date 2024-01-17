#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 1024
/*=========Struct=========*/

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

extern int type;
extern stack_t *head;
typedef void (*opcode_func)(stack_t **, unsigned int);

/*========main=======*/
void free_nodes(void);
/*========File Function=======*/
void open_file(const char *file_path);
void read_file(FILE *fd);
void split_line(int lineCount, char *line);
void get_fun(char *op, char *value, int lineCount);
void call_fun(opcode_func func, char *op, char *val, int ln);
/*========String Function=======*/
void print_ch(stack_t **, unsigned int);
void print_str(stack_t **, unsigned int);
/*========Error=======*/
void print_error(int ernum, ...);
void print_error2(int ernum, ...);
/*========Stack Function=======*/
void _pop(stack_t **, unsigned int);
void _pall(stack_t **, unsigned int);
void _push(stack_t **, unsigned int);
void _pint(stack_t **, unsigned int);
void _nop(stack_t **, unsigned int);
void _swap(stack_t **, unsigned int);
void _rotl(stack_t **, unsigned int);
void _rotr(stack_t **, unsigned int);
/*========Queue Function=======*/
void _insert(stack_t **, unsigned int);
void _delete(stack_t **, unsigned int);
/*========Math Function=======*/
void _add(stack_t **, unsigned int);
void _sub(stack_t **, unsigned int);
void _mul(stack_t **, unsigned int);
void _div(stack_t **, unsigned int);
void _mod(stack_t **, unsigned int);


stack_t *create_node(int n);
#endif
