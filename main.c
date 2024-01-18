#include "monty.h"

stack_t *head = NULL;
int type = 0;
/**
 * main - entry point
 * @ac: arguments count
 * @av: list of arguments
 * Return: always 0
 */
int main(int ac, char *av[])
{

	if (ac != 2)
	{
		print_error(1);
	}
	open_file(av[1]);
	free_nodes();
	return (0);
}

/**
 * free_nodes - Frees nodes in the stack.
 */
void free_nodes(void)
{
	stack_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
