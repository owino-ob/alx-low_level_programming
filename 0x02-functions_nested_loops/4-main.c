#include "main.h"

/**
 * main - check the code.
 * Return: Lways 0.
 */

int main(void)
{
        int r;

        r = _isalpha('H');
        _putchar(r + '0');
        r = _isalpha('o');
        _putchar(r + '0');
        r = _isalpha(100);
        _putchar(r + '0');
        _putchar('\n');
        return (0);
}
