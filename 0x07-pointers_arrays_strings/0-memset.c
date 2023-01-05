#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

<<<<<<< HEAD
	for (i = 0; i < n; i++)

		*(s + i) =  b;
=======

	for (i = 0; i < n; i++)

		*(s + i) =  b;

>>>>>>> 4319567ddaf8d1e06cf66c9dcf2c22c7690bce9b
	return (s);
}
