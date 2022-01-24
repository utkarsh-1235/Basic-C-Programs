#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
int size;
int top;
int *arr;
};
int isFull(struct stack *sp)
{
if(sp->top==sp->size-1)
{
return 1;
}
else
{
return 0;
}
};
int isempty(struct stack *sp)
{
if(sp->top==-1)
{
return 1;
}
else
{
return 0;
}
};
void push(struct stack *sp)
{
int val;
if(isFull(sp))
{
printf("\t stack is overflow \n");
}
else
{
sp->top++;
sp->arr[sp->top]=val;
}
};
int pop(struct stack *sp)
{
int val;
if(isempty(sp))
{
printf("\t stack is underflow \n");
return -1;
}
else
{
val=sp->arr[sp->top];
sp->top--;
return val;
}};
void main()
{
struct stack *ptr=(struct stack*)malloc(sizeof(struct stack));
ptr->size=50;
ptr->top=-1;
ptr->arr=(int*)malloc(ptr->size*sizeof(int));
printf("\t our stack is succesfully created \n");
printf("\t stack before pushing is full %d \n",isFull(ptr));
printf("\t stack before pushing is empty %d \n",isempty(ptr));
push(ptr,1);
push(ptr,23);
push(ptr,99);
push(ptr,75);
push(ptr,3);
push(ptr,64);
push(ptr,57);
push(ptr,46);
push(ptr,89);
push(ptr,6);
printf("\t stack after pushing is full %d \n",isFull(ptr));
printf("\t stack after pushing is empty %d \n",isempty(ptr));
printf("\t popped %d from the stack \n",pop(ptr));
printf("\t popped %d from the stack \n",pop(ptr));
printf("\t popped %d from the stack \n",pop(ptr));
getch();
}