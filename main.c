#include "monty.h"

/**
 * main - Main program for monty language
 * @argc: Argument count
 * @argv: Arguments
 * Return: 0 on success else 1
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	const char *filename = argv[1];

	readfile(filename);


	return (0);
}
