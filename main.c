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

	if (ac == 1)
	{
		print_error(1);
	}
	open_file(av[1]);
	return (0);
}
