#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
int r;
int f;
int *arr;
int size;
struct queue*q;
};
int isfull(struct queue*q)
{
if(q->r==q->size-1)
{
return 1;
}
else
{
return 0;
}
}
int isempty(struct queue*q)
{
if(q->r==q->f)
{
return 1;
}
else
{
return 0;
}
}
void enqueue(struct queue*q,int val)
{
if(isfull(q))
{
printf("\t queue is overflow \n");
}
else
{
q->r++;
q->arr[q->r]=val;
}
}
int dequeue(struct queue*q)
{
int val;
if(isempty)
{
printf("\t queue is underflow \n");
return -1;
}
else
{
q->f++;
val=q->arr[q->f];
return val;
}
}
void main()
{
struct queue*ptr=(struct queue*)malloc(sizeof(struct queue));
clrscr();
ptr->size=100;
ptr->r=ptr->f=-1;
ptr->arr=(int*)malloc(ptr->size*sizeof(int));
printf("\t queue before enqueue is%d \n",isfull(ptr));
printf("\t queue before dequeue is %d \n",isempty(ptr));
enqueue(ptr,34);
enqueue(ptr,12);
enqueue(ptr,14);
enqueue(ptr,4);
enqueue(ptr,89);
enqueue(ptr,5);
enqueue(ptr,7);
printf("\t queue after enqueue is %d \n",isfull(ptr));
printf("\t queue after dequeue is %d \n",isempty(ptr));
getch();
}

