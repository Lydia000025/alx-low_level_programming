#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: Argument total count
 * @av: Pointer to arguments
 * Return: Pointer to concatenated string (SUCCESS) or
 */
char *argstostr(int ac, char **av)
{
	int arg, byte, index, size = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];
		str[index++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
