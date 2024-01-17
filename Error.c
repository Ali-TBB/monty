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
    va_start(args, ernum);

    switch (ernum)
	{
        case 1:
            fprintf(stderr, "USAGE: monty file\n");
            break;
        case 2:
            fprintf(stderr, "Error: Can't open file %s\n", 
			va_arg(args, const char *));
            break;
        case 3:
            fprintf(stderr, "L%d: unknown instruction %s\n", 
			va_arg(args, int), va_arg(args, const char *));
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
    va_start(args, ernum);

    switch (ernum)
	{
		case 5:
			fprintf(stderr, "L%d: usage: push integer", va_arg(args, int));
			break;
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty", va_arg(args, int));
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack", va_arg(args, int));
		case 8:
			fprintf(stderr, "L%d: can't swap, stack too short", va_arg(args, int));
		case 9:
			fprintf(stderr, "L%d: can't add, stack too short", va_arg(args, int));
	}
	va_end(args);
	exit(EXIT_FAILURE);
}