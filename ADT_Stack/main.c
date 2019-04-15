#include <stdio.h>
#include "Item.h"
#include "list.h"
#include "stack.h"
#define N 10

int main(void) 
{
	stack A=newStack(), B;
	int n=5, pos=0;
	item r;
	printf("Inserire 5 item\n");
	for ( int i=0; i<n; i++)
		push(A, input_item());
	printf("\n");
	
	printStack(A);
	pop(A);
	printf("\nElimino il primo elemento:\n");
	printStack(A);
	return 0;	
}
