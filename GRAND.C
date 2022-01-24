#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
void print(struct node *n)
{
while(n!=NULL)
{
printf("\t %d \n",n->data);
n=n->link;
}
};
void main()
{
struct node *head=NULL, *ptr=NULL, *middle=NULL, *last=NULL;
clrscr();
head   = (struct node*)malloc(sizeof(struct node));
ptr    = (struct node*)malloc(sizeof(struct node));
middle = (struct node*)malloc(sizeof(struct node));
last   = (struct node*)malloc(sizeof(struct node));

head->link=ptr ;
head->data=14;

ptr->link=middle;
ptr->data=28;

middle->link=last;
middle->data=42;

last->link=NULL;
last->data=56;

printf("\t our linkedlist is \n");
print(head);
getch();
}




