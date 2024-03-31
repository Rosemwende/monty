#include "monty.h"
/**
 * addnode - this adds node to the head stack
 * @head: pointer at the head of stack
 * @x: the new_value
 * Return: void
 */
void addnode(stack_t **head, int x)
{
stack_t *new_node, *aux;

aux = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
exit(0);
}
if (aux)
aux->prev = new_node;
new_node->n = x;
new_node->next = *head;
new_node->prev = NULL;
*head = new_node;
}
