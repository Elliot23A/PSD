#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

struct stack
{
	list element;
};

stack newStack(void)
{
	stack stack1 = malloc(sizeof(struct stack));
	stack1->element = newList();
	return stack1;
}

int isEmptyStack(stack stack1)
{
	return isEmpty(stack1->element);
}

int push(stack stack1, item item1)
{
	addHead(stack1->element, item1);
	return 1;
}

int pop(stack stack1)
{
	item ris = removeHead(stack1->element);

	if ( ris != NULL )
		return 1;
	else
		return 0;
}

item top(stack stack1)
{
	return getFirst(stack1->element);
}

void printStack(stack stack1)
{
	printList(stack1->element);
}
