link: utils.o main.o Item_Int.o stack_array.o
	gcc utils.o main.o Item_Int.o stack_array.o -o stack.out

str :	utils.o list.o main.o Item_String.o stack_list.o
	gcc utils.o list.o main.o Item_String.o stack_list.o -o stack.out

int :	utils.o list.o main.o Item_Int.o stack_list.o
	gcc utils.o main.o Item_Int.o list.o stack_list.o -o stack.out

point :	utils.o list.o main.o Item_Point.o point.o stack_list.o
	gcc utils.o list.o main.o Item_Point.o point.o stack_list.o -o stack.out -lm

stack_list.o:
	gcc -c stack_list.c

stack_array.o:
	gcc -c stack_array.c

list.o:
	gcc -c list.c

Item_Point.o:
	gcc -c Item_Point.c

Item_String.o:
	gcc -c Item_String.c

Item_Int.o:
	gcc -c Item_Int.c

point.o:
	gcc -c point.c
	
utils.o :
	gcc -c utils.c
	
main.o :
	gcc -c main.c
	
clean: 
	rm -f utils.o main.o Item_String.o point.o Item_Int.o Item_Point.o list.o stack.out stack_list.o stack_array.o
