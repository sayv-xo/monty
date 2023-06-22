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
	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s/n", argv[1]);
		exit(EXIT_FAILURE);
	}

	char line[4096];
	int lineNumber = 1;


	return (0);
}
