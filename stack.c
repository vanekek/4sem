#include "stack.h"
#include <stdlib.h>
#include <stddef.h>

stack * create_stack(int size)
{ 
	stack * s = (stack *)malloc(sizeof(stack));
	if (s == NULL) {}
	s->arr = (int*)malloc(size*sizeof(int));
	if(s->arr == NULL){}
	s->size = size;
	s->crt = 0;
	return s;
}
void remove_stack(stack * s){
	free(s->arr);
	free(s);
}
int pop(stack *s){
return(s->arr[--s->crt]);
}
void push(stack *s, int val){
s->arr[s->crt++] = val;
}
