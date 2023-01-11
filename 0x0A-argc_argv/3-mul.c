#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication
*of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	
	j = atoi(argv[1]);
	i = atoi(argv[2]);

	mul = j * i;

	printf("%d", mul);
	return (0);
}
