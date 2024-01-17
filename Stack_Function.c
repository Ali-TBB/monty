#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _push - Pushes a new element onto the stack.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Line number of the opcode.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	if (stack == NULL && *stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	if (head == NULL)
	{
		head = *stack;
		return;
	}
	current = head;
	head = *stack;
	head->next = current;
	current->prev = head;
}
/**
 * _pall - Prints all elements in the stack.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Line number of the opcode.
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	if (stack == NULL)
		exit(EXIT_FAILURE);
	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
/**
 * _pop - Removes the top element from the stack.
 * @stack: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Line number of the opcode.
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	if (type == 1)
	{
		_delete(stack, line_number);
		return;
	}

}

void _nop(stack_t **head, unsigned int l)
{
	(void)head;
	(void)l;
}
void _swap(stack_t **head, unsigned int l)
{
	(void)head;
	(void)l;
}
void _sub(stack_t **head, unsigned int l)
{
	(void)head;
	(void)l;
}
void _mod(stack_t **head, unsigned int l)
{
	(void)head;
	(void)l;
}
void _rotl(stack_t **head, unsigned int l)
{
	(void)head;
	(void)l;
}
void _rotr(stack_t **head, unsigned int l)
{
	(void)head;
	(void)l;
}
void _pint(stack_t **head, unsigned int l)
{
	(void)head;
	(void)l;
}