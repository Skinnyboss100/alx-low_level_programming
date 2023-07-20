#include "main.h"
#include <unistd.h>

/**
 * main - program that prints _putchar
 * _putchar - writes the character c to standout
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 * on error return -1
 */
int _putchar(char c)
{
        return (write(1, &c ,1));
}
