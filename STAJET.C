#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
struct stack*sp;
int size;
int *arr;
int top;
};
int isfull(struct stack *sp)
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
int isempty(struct stack*sp)
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
void push(struct stack*sp,int val)
{
if(isfull(sp))
{
printf("\t stack is overflow \n");
}
else
{
sp->top++;
sp->arr[sp->top]=val;
}
};
int pop(struct stack*sp)
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
}
};
void main()
{
struct stack *ptr;
clrscr();
ptr=(struct stack*)malloc(sizeof(struct stack));
ptr->top=-1;
ptr->arr=(int*)malloc(ptr->size*sizeof(int));
ptr->size=100;
printf("\t stack before pushing %d is full \n",isfull(ptr));
printf("\t stack before pushing %d is empty \n",isempty(ptr));
push(ptr,20);
push(ptr,34);
push(ptr,10);
push(ptr,27);
push(ptr,36);
push(ptr,40);
push(ptr,2);
push(ptr,4);
printf("\t stack after pushing %d is full \n",isfull(ptr));
printf("\t stack after pushing %d is empty \n",isempty(ptr));
getch();
}
