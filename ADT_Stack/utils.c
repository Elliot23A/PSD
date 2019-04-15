//Modulo utils.h
#include <stdio.h>
#include "Item.h"

void swap(item *a, item *b)
{
	item temp = *b;
	*b = *a;
	*a = temp;
}

int min(int a[],int n) 
{
	int minimo=0, i;

	for(i=1;i<n;i++)
		if(a[i]<a[minimo])
			minimo=i;
	return minimo;
}
