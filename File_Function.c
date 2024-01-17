#include "monty.h"
#include <stdio.h>
#include <string.h>
/**
 * open_file - Opens a file with the given name.
 * @file_path: Name of the file to be opened.
 */
void open_file(const char *file_path)
{
    FILE *file = fopen(file_path, "r");
    if (file == NULL)
	{
		print_error(2, file_path);
    }
    read_file(file);
    fclose(file);
}

void read_file(FILE *file)
{
    char *line = NULL;
    size_t len = 0;
    size_t lineCount = 0;

    while (getline(&line, &len, file) != -1) {
        lineCount++;
        split_line(lineCount, line);
    }

    free(line);
}

void split_line(int lineCount, char *line)
{
    char *opcode;
    char *value;
    size_t length = strlen(line);

    if (length > 0 && line[length - 1] == '\n') {
        line[length - 1] = '\0';
    }

    opcode = strtok(line, " ");
    value = strtok(NULL, " ");


}
/**
 * get_fun - Gets the opcode from the file and executes the corresponding function.
 */
void get_fun(char *op, int lineCount)
{
	instruction_t func_list[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"nop", _nop},
		{"swap", _swap},
		{"add", _add},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", print_ch},
		{"pstr", print_str},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{NULL, NULL}
	};
}