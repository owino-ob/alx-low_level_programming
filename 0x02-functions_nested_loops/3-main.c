#include "main.h"

/**
 * main - check code.
 *
 * Retun: Always 0.
 */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(100);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
