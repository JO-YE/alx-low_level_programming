#include "main.h"
/**
 * _strcat -  function appends the src string to the dest string
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
        int j, k;

        j = 0;
        for (k = 0; dest[k] != '\0' ; k++)
                ;
        while (src[j] != '\0')
        {
                dest[k + j] = src[j];
                j++;
        }
        return (dest);
}
