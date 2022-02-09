typedef struct {
	int size;
	int crt;
	int * arr;
} stack;

stack * create_stack(int size);
void remove_stack(stack * s);
int pop(stack * s);
void push(stack * s, int val);
