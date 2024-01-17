#include "monty.h"
/**
 * _insert - Inserts a new element at a specific position in the stack.
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
	(*stack)->prev =current;
}
/**
 * _delete - Deletes a specific element from the stack.
 */
void _delete(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
