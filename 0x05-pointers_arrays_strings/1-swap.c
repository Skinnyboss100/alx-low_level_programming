#include "main.h"

/**
 * main - A function that swaps the values of two integers
 *
 * @a : integer to swap
 * @b: integer to swap
 * @temp: to store the variable temporarily
 */

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
