#include "main.h"
#include <unistd.h>

/**
 * main - program that prints _putchar
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c ,1));
}
