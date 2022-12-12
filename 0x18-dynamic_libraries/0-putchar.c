#include "main.h"
/**
 * putchar - putchar write the a character.
 *
 * Return: always 0 (success)
 */
int main(void)
{
        char *ch = "_putchar";

        while (*ch)
        {
                _putchar(*ch);
                ch++;
        }
        _putchar ('\n');

        return (0);
}
