#include "monty.h"
/**
 * free_stack - this frees a doubly linked list
 * @head: pointer at the head of stack
 */
void free_stack(stack_t *head)
{
stack_t *aux;

aux = head;
while (head)
{
aux = head->next;
free(head);
head = aux;
}
}
