#include "monty"

/**
 * f_pall - This function prints all
 * the elements in stack
 * @head: pointer to the top  of the stack
 * @counter: Unused parameter
 * Return: void
 */
void f_pall(stack_t, **head unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
