#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
    int i;
    if (n<99){
        for(i=n; i < 99; i++)
        {
            if (i>99) {
                _putchar((i/100)+'0');
                _putchar((i/10)+'0');
                _putchar((i%10)+'0');
            } else if (i>9) {
                _putchar((i/10)+'0');
                _putchar((i%10)+'0');
            } else {
                _putchar((i%10)+'0');
            }
            if(i != 98) {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    } else {
        for(i=n; i > 99; i--)
        {
            if (i<10) {
                _putchar((i%10)+'0');
            } else {
                _putchar((i/10)+'0');
                _putchar((i%10)+'0');
            }
            if(i != 98) {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');

    }
}
