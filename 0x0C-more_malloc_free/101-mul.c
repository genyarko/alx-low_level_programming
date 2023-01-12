#include <stdio.h>

#include <stdlib.h>

#include <string.h>



/**

 * main - multiplies two positive numbers

 * @argc: argument count

 * @argv: argument vector

 *

 * Return: 0 on success, 1 on error

 */

int main(int argc, char *argv[])

{

	int i, j;

	unsigned long int mul = 1;



	if (argc != 3)

	{

		printf("Error\n");

		exit(98);

	}

	for (i = 1; i < argc; i++)

	{

		for (j = 0; argv[i][j]; j++)

		{

			if (argv[i][j] < '0' || argv[i][j] > '9')

			{

				printf("Error\n");

				exit(98);

			}

		}

		mul *= atoi(argv[i]);

	}

	printf("%lu\n", mul);

	return (0);

}
