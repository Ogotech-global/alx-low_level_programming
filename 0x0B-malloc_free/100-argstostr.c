#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: A pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	len++;
	len++;
	}
	len++;  /* For the final NULL character */
	str = malloc(len * sizeof(char));
	if (str == NULL)
	return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	str[k++] = av[i][j];
	str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}

