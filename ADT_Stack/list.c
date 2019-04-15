#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include "utils.h"
#include "Item.h"

struct list
{
	int size;
	struct node *head;
};

struct node
{
	item item;
	struct node *next;
};

list newList(void)
{
	list list = malloc( sizeof(struct list) );
	list->size = 0;
	list->head = NULL;
	return list;
}

int isEmpty(list list)
{
	if ( list->size < 1 )
		return 1;
	else
		return 0;
}

void addHead(list list, item item)
{
	struct node *x = malloc( sizeof(struct node) );
	x->next = list->head;
	x->item = item;
	list->head = x;
	list->size++;
}

item removeHead(list list)
{
	if ( isEmpty(list) )
	{
		fprintf(stderr, "Lista vuota");
		return NULL;
	}
	struct node *x = malloc( sizeof(struct node) );
	x = list->head;
	list->head = x->next;
	item item = x->item;
	free(x);
	list->size--;
	
	return item;
}

void printList(list list)
{
	struct node *p;
	int i;
	for(p = list->head, i=0; p != NULL ; p = p->next, i++)
		output_item(p->item);
}

item getFirst(list list)
{
	item p = list->head->item;
	return p;
}

struct node * minimo (struct node *p)
{
	struct node *i, *min = p;
	for (i = p->next; i != NULL; i = i->next)
	{
		if ((compare_item(min->item, i->item)) > 0)
			min = i;
	}
	return min;
}

void selectionSort(list list)
{
	struct node *p, *pos_minimo;
	for (p=list->head; p != NULL; p = p-> next)
	{
		pos_minimo = minimo(p);
		swap(&(pos_minimo->item), &(p->item));
	}
}

item searchItem(list list1, item item1, int *pos)
{
	struct node *p;	
	if ( !isEmpty(list1) )
	{
		for ( p=list1->head; p != NULL; p = p->next)
		{
			if ( compare_item(item1, p->item) == 0 )
				return p->item;
			++*pos;
		}
	}
	else
		fprintf(stderr, "Lista vuota\n");

	*pos=-1;
	return NULL;
}

list removeItem(list list1, item item1)
{
	if ( isEmpty(list1) )
		fprintf(stderr, "Lista vuota\n");
	else
	{
		struct node *search, *app;
		search = list1->head;
		for ( int i=0; i<list1->size; i++)
			if ( compare_item(item1, search->next->item) )
			{
				app = search->next;
				search = app->next;
				free(app);
			}	
	}	
}

int insertItem(list list1, item item1, int pos)
{
	struct node *p = list1->head, *d , *app;
	if ( pos < 0 || pos > list1->size )
	{
		fprintf(stderr, "Posizione errata\n");
		return 0;
	}
	else if ( pos == 0 )
	{
		addHead(list1, item1);
		return 1;
	}
	else
	{
		d = malloc ( sizeof(struct node) );
		app = malloc ( sizeof(struct node) );
		for (int i=0 ; i < pos-1 ; p = p->next, i++);
		d->next = p->next;
		d->item = item1;
		p->next = d;
		return 1;
	}
}

void insertTail(list list1, item item1)
{
	struct node *p;
	for ( p = list1->head; p->next != NULL; p = p->next );
	
	p->next = malloc (sizeof (struct node) );
	p->next->item = item1;
	p->next->next = NULL;
	list1->size++;
}

list reverseList(list list1)
{
	struct node *pen, *app, *prev;
	pen = list1->head;
	prev = list1->head->next;
	pen = prev->next;
	for ( prev->next = NULL; pen != NULL; pen = app) 
	{
		if ( pen->next == NULL )
			app = NULL;
		else
			app = pen->next;
	
		pen->next = prev;
		prev = pen;
	}
	list1->head->next = prev;
}


list cloneListStrct(list list1)
{
	if(isEmpty(list1)){
		fprintf(stderr,"Lista vuota\n");
		return NULL;
	}
	
	list clone= newList();
	struct node *source, *target;
	
	clone->head= malloc(sizeof(struct node));
	target= clone->head;
	
	for(source= list1->head; source != NULL; source= source->next, target= target->next){
		target->item = source->item;
		clone->size++;
		if (source->next == NULL)
			target->next= NULL;
		else
			target->next= malloc(sizeof(struct node));
	}
	
	return clone;
}
	































