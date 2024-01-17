#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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



/*========main=======*/
/*========File Function=======*/
void open_file(const char *file_path);
void read_file(FILE *fd);
void split_line(int lineCount, char *line);
void get_fun(char *op, int lineCount);
/*========String Function=======*/
void print_ch(stack_t **h, unsigned int n);
void print_str(stack_t **h, unsigned int n);
/*========Error=======*/
void print_error(int ernum,...);
void print_error2(int ernum, ...);
/*========Stack Function=======*/
void _pop(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _rotl(stack_t **stack, unsigned int line_number);
void _rotr(stack_t **stack, unsigned int line_number);
/*========Queue Function=======*/
void _insert();
void _delete();
void _display();
/*========Math Function=======*/
void _add(stack_t **h, unsigned int n);
void _sub(stack_t **h, unsigned int n);
void _mul(stack_t **h, unsigned int n);
void _div(stack_t **h, unsigned int n);
void _mod(stack_t **h, unsigned int n);

#endif
