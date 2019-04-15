#include <stdlib.h>
#include <stdio.h>
#include "Item.h"

item input_item(void)
{
	int *p = malloc( sizeof(int) );
	scanf("%d", p); 
	return p;
}

void output_item(item item)
{
	int *p = item;
	printf("%d\n", *p);
}

int compare_item(item item1, item item2)
{
	int *p = item1, *d = item2;

	if ( *p > *d )
		return 1;
	else if ( *p == *d)
		return 0;
	else 
		return -1;
}
