#include "monty.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_error - Prints error messages.
 * @ernum: Error number.
 * @...: Variable arguments.
 */
void print_error(int ernum, ...)
{
	va_list args;
	char *op;
	int num;

	va_start(args, ernum);
	switch (ernum)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			op = va_arg(args, char *);
			fprintf(stderr, "Error: Can't open file %s\n", op);
			break;
		case 3:
			op = va_arg(args, char *);
			num = va_arg(args, int);
			fprintf(stderr, "L%d: unknown instruction %s\n", num, op);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		default:
			fprintf(stderr, "Unknown error\n");
	}
	va_end(args);
	exit(EXIT_FAILURE);
}
/**
 * print_error2 - Prints error messages.
 * @ernum: Error number.
 * @...: Variable arguments.
 */
void print_error2(int ernum, ...)
{
	va_list args;
	int num; 

	va_start(args, ernum);
	switch (ernum)
	{
		case 5:
			num = va_arg(args, int);
			fprintf(stderr, "L%d: usage: push integer", num);
			break;
		case 6:
			num = va_arg(args, int);
			fprintf(stderr, "L%d: can't pint, stack empty", num);
			break;
		case 7:
			num = va_arg(args, int);
			fprintf(stderr, "L%d: can't pop an empty stack", num);
			break;
		case 8:
			num = va_arg(args, int);
			fprintf(stderr, "L%d: can't swap, stack too short", num);
			break;
		case 9:
			num = va_arg(args, int);
			fprintf(stderr, "L%d: can't add, stack too short", num);
			break;
	}
	va_end(args);
	exit(EXIT_FAILURE);
}