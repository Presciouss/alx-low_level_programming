#include <stdio.h>
#include "main.h"

/**
 * main -  prints the number of arguments passed into it
 * @argc: number of argumemnts
 * @argv: array of argumenmts
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argv;/*ignore argv*/
printf("%d\n", argc - 1);

return (0);
}
