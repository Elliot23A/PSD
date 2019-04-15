#include <stdlib.h>
#include <stdio.h>
#include "stack.h"
#define MAXSTACK 50

struct stack
{
	item element[MAXSTACK];
	int top;
};

stack newStack(void)
{
	stack stack1 = malloc(sizeof(struct stack));
	stack1->top = 0;
	return stack1;
}

int isEmptyStack(stack stack1)
{
	if ( stack1->top == 0 )
		return 0;
	else 
		return 1;
}

int push(stack stack1, item item1)
{
	stack1->element[stack1->top] = item1;
	stack1->top++;
	return 1;
}

int pop(stack stack1)
{
	stack1->element[stack1->top] = NULL;
	stack1->top--;
}

item top(stack stack1)
{
	return stack1->element[stack1->top-1];
}

void printStack(stack stack1)
{
	for (int i=0; i	< stack1->top; i++)
		output_item(stack1->element[i]);
}
