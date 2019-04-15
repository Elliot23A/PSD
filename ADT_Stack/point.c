#include <math.h>
#include <stdlib.h>
#include "point.h"

struct point
{
	float x;
	float y;
};

point createPoint(float x, float y)
{
	point p = malloc(sizeof(point));
	p->x=x;
	p->y=y;
	return p;
}

float ascissa(point p)
{
	return p->x;
}

float ordinata(point p)
{
	return p->y;
}

float distanza(point p1, point p2)
{
	float dx, dy,d;
	dx=p1->x - p2->x;
	dy=p1->y - p2->y;
	d=sqrt((dx*dx) + (dy*dy));
	return d;
}
