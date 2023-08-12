#include <stdio.h>

int main(void)
{
    // This program prints all the numbers of base 16 in lowercase, followed by a new line.
    
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    for (i = 'a'; i <= 'f'; i++)
    {
        putchar(i);
    }

    putchar('\n');

    return 0;
}
