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
int isfull(struct queue *ptr)
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
void enque(struct queue*ptr,int val)
{
if(isfull(ptr))
{
printf("\t queue is overflow \n");
}
else
{
ptr->b++;
ptr->arr[ptr->b]=val;}
};
int deque(struct queue*ptr)
{
int a;
if(ptr->b==ptr->f)
{
printf("\t queue is underflow \n");

return -1;}
else
{
ptr->f++;
a=ptr->arr[ptr->f];
return a;
}
};
void main()
{
struct queue q;
q.size=7;
q.f=q.b=-1;
q.arr=(int*)malloc(sizeof(int));
printf("\t queue is created now \n");
printf("\t before inserting queue is full %d \n",isfull(&q));
enque(&q,2);
enque(&q,10);
enque(&q,18);
enque(&q,29);
enque(&q,30);
enque(&q,40);
enque(&q,14);
enque(&q,19);
enque(&q,2);
enque(&q,9);
printf("\t after inserting queue is full %d \n",isfull(&q));
getch();
}