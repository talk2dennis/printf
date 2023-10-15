#include "main.h"
/**
* _strlen - Function to return the length of a string
* @str: strings to print
* Return: nothing
*/
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}

