#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
=======
 * main - program that prints its name.
 * @argc : number of arguments.
 * @argv : array that contains the arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
(void)argc;
return (0);
>>>>>>> a
}
