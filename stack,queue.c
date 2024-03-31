#include "monty.h"

#include "monty.h"
/**
 * f_stack - it prints the top
 * @head: pointer at the head of stack
 * @counter: line_number
 * Return: void
 */
void f_stack(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 0;
}
/**
 * f_queue - it prints the top
 * @head: pointer at the head of stack
 * @counter: line_number
 * Return: void
 */
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 1;
}
/**
 * addqueue - this adds node at the tail stack
 * @head: pointer at the head of stack
 * @x: the new_value
 * Return: void
 */
void addqueue(stack_t **head, int x)
{
stack_t *new_node, *aux;
aux = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
}
new_node->n = x;
new_node->next = NULL;
if (aux)
{
while (aux->next)
aux = aux->next;
}
if (!aux)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
aux->next = new_node;
new_node->prev = aux;
}
}
