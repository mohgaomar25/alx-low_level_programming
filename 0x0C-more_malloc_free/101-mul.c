#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];
	
	if (!is_positive_integer(num1) || !is_positive_integer(num2))
	{
		printf("Error\n");
		return (98);
	}

	char *result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);

	return (0);
}

/**
 * is_positive_integer - Checks if a string represents a positive integer.
 * @str: The string to check.
 *
 * Return: 1 if the string is a positive integer, 0 otherwise.
 */
int is_positive_integer(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive integer strings.
 * @num1: The first positive integer string.
 * @num2: The second positive integer string.
 *
 * Return: The result of the multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len = len1 + len2;
	int *result = calloc(len, sizeof(int));

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = mul + result[i + j + 1];
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	char *res_str = malloc(len + 1);
		int start = 0;
		while (start < len && result[start] == 0)
			start++;

		if (start == len)
		{
			res_str[0] = '0';
			res_str[1] = '\0';
		}
		else
		{
			for (int i = start; i < len; i++)
				res_str[i - start] = result[i] + '0';
			res_str[len - start] = '\0';
		}

		free(result);
		return res_str;
}
