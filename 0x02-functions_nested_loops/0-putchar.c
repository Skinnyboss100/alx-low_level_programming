#include "main.h"
#include <unistd.h>

/**
 * main - program that prints _putchar
 * _putchar - writes the character c to stand out
 * @c: The character to print
 *
 * Return: Always 1 (Success)
 * on error, -1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c ,1));
}
