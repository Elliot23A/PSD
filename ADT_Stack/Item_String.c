#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Item.h"

item input_item(void)
{
	char *p = malloc( sizeof(char) * 20) ;
	scanf("%s", p);
	return p;
}

void output_item(item item)
{
	char *p = item;
	printf("%s\n", p);
}

int compare_item(item item1, item item2)
{
	char *p = item1, *d = item2;

	if ( *p > *d )
		return 1;
	else 
		return 0;
}
