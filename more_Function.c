#include "monty.h"
#include <stdlib.h>
/**
 * create_node - Creates a node.
 * @n: Number to go inside the node.
 * Return: Upon sucess a pointer to the node. Otherwise NULL.
 */
stack_t *create_node(int n)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
		print_error(4);
	node->next = NULL;
	node->prev = NULL;
	node->n = n;
	return (node);
}

/**
 * _rotl - Rotates the stack to the top.
 * @stack: Pointer to the top node of the stack.
 * @line_number: Line number of the opcode.
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *node;

	(void)line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;

	current = *stack;
	node = *stack;
	(*stack) = (*stack)->next;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node;
	node->next = NULL;
	node->prev = current;
}
/**
 * _rotr - Rotates the stack to the bottom.
 * @stack: Pointer to the top node of the stack.
 * @line_number: Line number of the opcode.
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * _pint - Prints the value at the top of the stack.
 * @stack: Pointer to the top node of the stack.
 * @line_number: Line number of the opcode.
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		print_error2(6, line_number);
	printf("%d\n", (*stack)->n);
}
