#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include "utils.h"
#include "Item.h"

typedef struct stack *stack;

stack newStack(void);
int isEmptyStack(stack stack1);
int push(stack stack1, item item1);
int pop(stack stack1);
item top(stack stack1);
void printStack(stack stack1);
