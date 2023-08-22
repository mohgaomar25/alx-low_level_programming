#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int _putchar(char c);

/**
 * main - print password.
 *
 * Return: 0.
 */
int main(void)
{
	int ascii = 2772, i = 0, j, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[i] = random;
		ascii -= random;
		i++;
	}
	if (ascii > 0)
		password[i] = ascii;
	else
	{
		i--;
	}

	for (j = 0; j <= i; j++)
	{
		_putchar(password[j]);
	}
	_putchar('\n'); // Add a newline character at the end
       	return (0);
}

int _putchar(char c)
{
	return write(1, &c, 1);
}
