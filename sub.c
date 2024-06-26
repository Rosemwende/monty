#include "monty.h"
/**
 * f_sub - this subtracts the top element
 * of the stack from the second
 * top element of the stack
 * @head: pointer at the head of stack
 * @counter: line_counter
 * Return: valid
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *aux;
int sub, nodes;

aux = *head;
for (nodes = 0; aux != NULL; nodes++)
aux = aux->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = *head;
sub = aux->next->n - aux->n;
aux->next->n = sub;
*head = aux->next;
free(aux);
}
