#include "main.h"
/**
 *  _strcmp - function that compare 2 strings
 *  @s1: string to be compared
 *  @s2: string to compare by
 *  Return: the difference between the 1st
 *  character that are not the same
 */
int _strcmp(char *s1, char *s2)
{
        int i;

        for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
                ;
        return (s1[i] - s2[i]);
}
