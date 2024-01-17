#include "monty.h"
/**
 * _insert - Inserts a new element into the queue.
 * @stack: Pointer to the top node of the queue.
 * @line_number: Line number of the opcode.
 */
void _insert(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	if (stack == NULL || *stack == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *stack;
		return;
	}
	current = head;
	while (current->next != NULL)
		current = current->next;

	current->next = *stack;
	(*stack)->prev = current;
}
/**
 * _delete - Deletes the front element of the queue.
 * @stack: Pointer to the top node of the queue.
 * @line_number: Line number of the opcode.
 */
void _delete(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
