#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: stored memory
 * @src: copied memory
 * @n: bytes
 *
 * Return: byte changed
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)

	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
