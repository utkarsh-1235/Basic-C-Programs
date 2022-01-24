#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
int size;
int *arr;
int top;
};
int isFull(struct stack*sp)
{
if(sp->top==sp->size-1)
{
return 1;
}
else
{
return 0;
}
}
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
}
void push(struct stack*sp,int val)
{
if(isFull(sp))
{
printf("\t stack is overflow \n");
}
else
{
sp->top++;
sp->arr[sp->top]=val;
}
}
int pop(struct stack*sp,int val)
{
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
}
int peek(struct stack*sp,int i)
{
if(sp->top-i+1<0)
{
printf("\t not valid \n");
return 0;
}
else
{
return sp->arr[sp->top-i+1];
}
}
void main()
{
struct stack *sp;
sp->size=10;
sp->top=-1;
sp->arr;
sp->arr=(int*)malloc(sp->size*sizeof(int));
int i;
clrscr();
printf("\t stack before putting the elements is empty %d \n",isempty(sp));
printf("\t stack before putting the elements is full %d \n",isFull(sp));
push(sp,10);
push(sp,20);
push(sp,30);
push(sp,40);
push(sp,50);
push(sp,60);
push(sp,70);
push(sp,80);
push(sp,90);
push(sp,100);
printf("\t stack after the putting the elements is full %d \n",isFull(sp));
printf("\t stack after the putting the elements is empty %d \n",isempty(sp));
for(i=1;i<=sp->size;i++)
{
printf("%d \n",peek(sp,i));
}
getch();
}