#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it does not have a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *valley = list;
	listint_t *hill = list;

	if (!list)
		return (0);

	while (valley && hill && hill->next)
	{
		valley = valley->next;
		hill = hill->next->next;
		if (valley == hill)
			return (1);
	}

	return (0);
}
