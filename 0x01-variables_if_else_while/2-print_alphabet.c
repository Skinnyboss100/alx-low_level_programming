#include <stdio.h>
/**
 * main - Prints the alphabets in lower case followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}
