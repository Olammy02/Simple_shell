#include "main.h"

/**
 * get_len - Get the lenght of a number.
 * @n: type int number.
 * Return: Lenght of a number.
 */
int get_len(int n)
{
	unsigned int c1;
	int lenght = 1;

	if (c < 0)
	{
		lenght++;
		c1 = c * -1;
	}
	else
	{
		c1 = c;
	}
	while (c1 > 9)
	{
		lenght++;
		c1 = c1 / 10;
	}

	return (lenght);
}
/**
 * aux_itoa - function converts int to string.
 * @n: type int number
 * Return: String.
 */
char *aux_itoa(int c)
{
	unsigned int c1;
	int lenght = get_len(c);
	char *buffer;

	buffer = malloc(sizeof(char) * (lenght + 1));
	if (buffer == 0)
		return (NULL);

	*(buffer + lenght) = '\0';

	if (c < 0)
	{
		c1 = c * -1;
		buffer[0] = '-';
	}
	else
	{
		c1 = c;
	}

	lenght--;
	do {
		*(buffer + lenght) = (c1 % 10) + '0';
		c1 = c1 / 10;
		lenght--;
	}
	while (n1 > 0)
		;
	return (buffer);
}

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pc = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pc *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pc);
}
