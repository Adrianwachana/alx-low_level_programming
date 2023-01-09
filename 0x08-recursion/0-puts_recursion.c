#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */

void _puts_recursion(char *s)

{
<<<<<<< HEAD

=======
>>>>>>> 5bc37e3f5fe81cff0d0b19f96e98c6ec2c034665
	if (*s != '\0')

	{
		_putchar(*s);

		_puts_recursion(s + 1);
	}

	else

		_putchar('\n');
}
