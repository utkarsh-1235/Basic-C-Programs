#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node*f=NULL;
struct node*r=NULL;
struct node
{
int data;
struct node *next;
};
void print(struct node*sp)
{
while(sp!=NULL)
{
printf("\t element: %d \n",sp->data);
sp=sp->next;
}
};
int isfull()
{
struct node*n=(struct node*)malloc(sizeof(struct node));
if(n==NULL)
{
return 1;
}
else
{
return 0;
}
};
int isempty(struct node*f)
{
if(f==NULL)
{
return 0;
}
else
{
return 1;
}
};
void enqueue(int val)
{
struct node*n=(struct node*)malloc(sizeof(struct node));
if(isfull())
{
printf("\t queue is overflow \n");
}
else
{
n->data=val;
n->next=NULL;
if(f==NULL)
{
r=f=n;
}
else
{
r->next=n;
r=n;
}
}
};
int dequeue()
{
int val=-1;
struct node*ptr=f;
if(isempty(ptr))
{
printf("\t stack is underflow \n");
return -1;
}
else
{
f=f->next;
val=ptr->data;
free(ptr);
return val;
}
};
void main()
{
print(f);
printf("\t dequeuing element is %d \n",dequeue());
enqueue(34);
enqueue(4);
enqueue(7);
enqueue(17);
printf("\t dequeuing element %d \n",dequeue());
printf("\t dequeuing element %d \n",dequeue());
printf("\t dequeuing element %d \n",dequeue());
printf("\t dequeuing element %d \n",dequeue());
getch();
print(f);
}