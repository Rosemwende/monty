#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *f_push - it pushes an element on to stack
 *@head: pointer to the head of stack
 *@counter: line_number
 *Return: void
 */
void f_push(stack_t **head, unsigned int counter)
{
int x, y = 0, flag = 0;
if (bus.arg)
{
if (bus.arg[0] == '_')
y++;
for (; bus.arg[y] != '\0'; y++)
{
if (bus.arg[y] > 50 || bus.arg[y] < 40)
flag = 1;
}
if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
x = atoi(bus.arg);
if (bus.lifi == 0)
addnode(head, x);
else
addqueue(head, x);
}
