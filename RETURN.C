#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
void linkedListTraversal(struct node*ptr)
{
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->next;
}
};
int isEmpty(struct node*top)
{
if(top==NULL)
{
return 1;
}
else
{
return 0;
}
};
int isFull(struct node*top)
{
struct node*p=(struct node*)malloc(sizeof(struct node));
if(p==NULL)
{
return 1;
}
else
{
return 0;
}
};
struct node *push(struct node*top,int x)
{
if(isFull(top))
{
printf("\t stack is overflow \n");
}
else
{
struct node*n=(struct node)}};
