#include "main.h"

/**
 * main - A function that returns the length of a string
 * @s: string
 * Return: Length of string
 */

int _strlen(char *s)
{
    int measure = 0;
    
    while (*s != '\0' )
    {
        measure++;
        s++;
    }
    return measure;
}
