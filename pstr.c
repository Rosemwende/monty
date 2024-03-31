#include "monty.h"
/**
 * f_pstr - it prints the string starting at the
 * top of the stack followed by a new line
 * @head: pointer at the head of stack
 * @counter: line_number
 * Return: Void
 */
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
while (h)
{
if (h->n > 120 || h->n <= 0)
{
break;
}
printf("%c", h->n);
}
printf("\n");
}
