#include "monty.h"
#include <stdio.h>


/**
 * _add - Adds the top two elements of the stack.
 * @h: Pointer to a pointer pointing to the top node of the stack.
 * @n: Line number of the opcode.
 */
void _add(stack_t **h, unsigned int n)
{
    int i;
	stack_t *temp;

    if (h == NULL || *h == NULL || (*h)->next == NULL)
    {
        print_error2(9, n);
    }
    i = (*h)->n + (*h)->next->n;
    (*h)->next->n = i;
    temp = *h;
    *h = (*h)->next;
    free(temp);
    if (*h != NULL)
    {
        (*h)->prev = NULL;
    }
}

/**
 * _sud - Subtracts the top element from the second top element of the h.
 * @h: Pointer to a pointer pointing to the top node of the stack.
 * @n: Line number of the opcode.
 */
void _sud(stack_t **h, unsigned int n)
{
    int i;
	stack_t *temp;

    if (h == NULL || *h == NULL || (*h)->next == NULL)
    {
        print_error3(10, n);
    }
    i = (*h)->next->n - (*h)->n;
    (*h)->next->n = i;
    temp = *h;
    *h = (*h)->next;
    free(temp);
    if (*h != NULL)
    {
        (*h)->prev = NULL;
    }
}
/**
 * _mul - Multiplies the top two elements of the stack.
 * @h: Pointer to a pointer pointing to the top node of the stack.
 * @n: Line number of the opcode.
 */
void _mul(stack_t **h, unsigned int n)
{
    int i;
	stack_t *temp;

    if (h == NULL || *h == NULL || (*h)->next == NULL)
    {
        print_error3(13, n);
    }
    i = (*h)->n * (*h)->next->n;
    (*h)->next->n = i;
    temp = *h;
    *h = (*h)->next;
    free(temp);
    if (*h != NULL)
    {
        (*h)->prev = NULL;
    }
}
/**
 * _div - Divides the second top element by the top element of the stack.
 * @h: Pointer to a pointer pointing to the top node of the stack.
 * @n: Line number of the opcode.
 */
void _div(stack_t **h, unsigned int n)
{
    int i;
	stack_t *temp;

    if (h == NULL || *h == NULL || (*h)->next == NULL)
    {
        print_error3(11, n);
    }
	if ((*h)->n == 0)
	{
		print_error3(12, n);
	}
    i = (*h)->next->n / (*h)->n;
    (*h)->next->n = i;
    temp = *h;
    *h = (*h)->next;
    free(temp);
    if (*h != NULL)
    {
        (*h)->prev = NULL;
    }
}
/**
 * _mol - Computes the modulus of the second top element by
 * the top element of the stack.
 * @h: Pointer to a pointer pointing to the top node of the stack.
 * @n: Line number of the opcode.
 */
void _mol(stack_t **h, unsigned int n)
{
    int i;
	stack_t *temp;

    if (h == NULL || *h == NULL || (*h)->next == NULL)
    {
        print_error3(14, n);
    }
	if ((*h)->n == 0)
	{
		print_error3(12, n);
	}
    i = (*h)->next->n % (*h)->n;
    (*h)->next->n = i;
    temp = *h;
    *h = (*h)->next;
    free(temp);
    if (*h != NULL)
    {
        (*h)->prev = NULL;
    }
}
