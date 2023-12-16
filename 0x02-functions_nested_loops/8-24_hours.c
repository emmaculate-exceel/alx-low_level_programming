#include "main.h"

/**
* jack_bauer - prints to the output every
* minutes of the day
*
* Return: Always Nothing.
*/
void jack_bauer(void)
{
    int i, x;

    for(i = 0; i < 25; i++)
    {
        for(x = 0; x < 60; x++)
        {
            _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');
            _putchar(':');
            _putchar((x / 10) + '0');
            _putchar((x % 10) + '0');
            _putchar('\n');
        }
    }
    _putchar('\n');
}
