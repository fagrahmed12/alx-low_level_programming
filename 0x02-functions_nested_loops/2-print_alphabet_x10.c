#include <main.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
