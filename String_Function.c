#include "monty.h"
#include <stdio.h>
/**
 * print_ch - Prints characters from the stack.
 * @h: Pointer to a pointer pointing to the top node of the stack.
 * @n: Line number of the opcode.
 */
void print_ch(stack_t **h, unsigned int n)
{
	int i;

	if (h == NULL || *h == NULL)
	{
		print_error3(16, n);
	}
	i = (*h)->n;
	if (i >= 32 && i <= 126)
	{
		putchar(i);
		putchar('\n');
	}
	else
	{
		print_error3(15, n);
	}
}
/**
 * print_str - Prints strings from the stack.
 * @h: Pointer to a pointer pointing to the top node of the stack.
 * @n: Line number of the opcode.
 */
void print_str(stack_t **h, unsigned int n)
{
	(void)h;
	(void)n;
}
