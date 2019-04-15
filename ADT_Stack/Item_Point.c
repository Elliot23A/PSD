#include <stdlib.h>
#include <stdio.h>
#include "Item.h"
#include "point.h"

item input_item(void)
{
	point p;
	float x, y;
	scanf("%f %f", &x , &y); 
	p = createPoint(x, y);
	return p;
}

void output_item(item item)
{
	point p = item;
	printf("%.2f %.2f\n", ascissa(p), ordinata(p) );
}

int compare_item(item item1, item item2)
{
	point p = item1, d = item2, z=createPoint(0, 0);
	float d1 = distanza(p, z), d2 = distanza(d, z);
	free(z);

	if ( d1 > d2 )
		return 1;
	else if ( d1 == d2 )
		return 0;
	else 
		return -1;
	
}
