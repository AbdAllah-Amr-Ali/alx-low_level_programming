#include "lists.h"
#include <stdio.h>

/**
 * _strlen - returns the lenght of a string
 * @s: the string whose length to check
 *
 * Return: integer length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_listint - print the int value in each element of a list.
 * @h: pointer to the head of a list.
 *
 * Return: Number of elements in a list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}

