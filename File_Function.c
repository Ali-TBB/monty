#include "monty.h"
#include <ctype.h>
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
	if (strcmp(opcode, "stack") == 0)
		type = 0;
	if (strcmp(opcode, "queue") == 0)
		type = 1;
	get_fun(opcode, value, lineCount);
}
/**
 * get_fun - Gets the opcode from the file and executes the corresponding function.
 */
void get_fun(char *op, char *value, int lineCount)
{
	int i, err;

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
	if (op[0] == '#')
		return;
	for (err = 1, i = 0; func_list[i].opcode != NULL; i++)
	{
		if (strcmp(op, func_list[1].opcode) == 0)
		{
			call_fun(func_list[i].f, op, value, lineCount);
			err = 0;
		}
	}
	if (err == 1)
		print_error(3, lineCount, op);

}
void call_fun(opcode_func func, char *op, char *value, int ln)
{
	stack_t *node;
	int i = 0, Signs = 1;

	if (strcmp(op, "push") == 0)
	{
		if (value != NULL && value[0] == '-')
		{
			value = value + 1;
			Signs = -1;
		}
		if (value == NULL)
			print_error2(5);
		while (value[i] != '\0')
		{
			if (isdigit(value[i]) == 0)
				print_error2(5);
		}
		node = create_node(atoi(value) * Signs);
		if (type == 0)
			func(&node, ln);
		if (type == 1)
			_insert(&node, ln);
	}
	else
	{
		func(&head, ln);
	}
}
