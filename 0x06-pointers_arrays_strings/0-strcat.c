#include "main.h"
/**
 * _strcat-appends src to dest,overwriting terminating null byte (\0),
 * at the end of dest, and then adds a terminating null byte
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: 0.
 */
char *_strcat(char *dest, char *src)
{
        int lengthD, lengthS;

        lengthD = 0;
        lengthS = 0;

        while (*(dest + lengthD) != '\0')
                lengthD++;

        while (*(src + lengthS) != '\0' && lengthD < 97)
        {
                *(dest + lengthD) = *(src + lengthS);
                lengthD++;
                lengthS++;
        }
        *(dest + lengthD) = '\0';
