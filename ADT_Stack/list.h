#include <stdlib.h>
#include "Item.h"

typedef struct list *list;
typedef struct node *node;
list newList(void);
int isEmpty(list);
void addHead(list list, item item);
item removeHead(list list);
void printList(list list);
item getFirst(list list);
struct node *minimo(struct node *p);
void selectionSort(list list);
item searchItem(list list1, item item1, int *pos);
list removeItem(list list1, item item1);
int insertItem(list list1, item item1, int pos);
void insertTail(list list1, item item1);
list reverseList(list list1);
list cloneListStrct(list list1);
