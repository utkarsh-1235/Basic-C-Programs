#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
int size;
int f;
int b;
int *arr;
};
int isempty(struct queue*ptr)
{
if(ptr->f==ptr->b)
{
return 1;
}
else
{
return 0;
}
};
int isfull(struct queue*ptr)
{
if(ptr->b==ptr->size-1)
{
return 1;
}
else
{
return 0;
}
};
void enqueue(struct queue *ptr,int val)
{
if(isfull(ptr))
{
printf("\t queue is overflow \n");
}
else
{
ptr->b=ptr->b++;
ptr->arr[ptr->b]=val;
}
};
int dequeue(struct queue*ptr)
{
int val=-1;
if(isempty(ptr))
{
printf("\t queue is underflow \n");
return -1;
}
else
{
ptr->f=ptr->f++;
val=ptr->arr[ptr->f];
return val;
}
};
void main()
{
struct queue q;
clrscr();
q.size=100;
q.arr=(int*)malloc(sizeof(int));
q.f=q.b=-1;
printf("\t queue is created \n");
printf("\t queue before insertion is full %d \n",isfull(&q));
printf("\t queue before insertion is empty %d \n",isempty(&q));
enqueue(&q,23);
enqueue(&q,12);
enqueue(&q,10);
enqueue(&q,24);
enqueue(&q,54);
enqueue(&q,21);
enqueue(&q,45);
enqueue(&q,89);
enqueue(&q,90);
printf("\t queue after insertion is full %d \n",isfull(&q));
printf("\t queue after insertion is empty %d \n",isempty(&q));
getch();
}