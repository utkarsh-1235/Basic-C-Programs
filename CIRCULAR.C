#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link ;
//struct node *current;
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
//creation of first node
struct node *head=NULL,*middle=NULL,*last=NULL,*ptr=NULL;
clrscr();
head=(struct node*)malloc(sizeof(struct node));
middle=(struct node*)malloc(sizeof(struct node));
last=(struct node*)malloc(sizeof(struct node));
ptr= (struct node*)malloc(sizeof(struct node));
head->data=45;
head->link=middle;
//creation of second node
 //struct node *middle->NULL;
middle->data=67;
//middle->link=NULL;
middle->link=last;
//creation of third node
//struct node *last=NULL;
last->data=90;
last->link=head;
ptr=head;
/*
while(ptr->link!=head)
{
printf("\t %d \n",ptr->data);
ptr=ptr->link;
}
printf("\t %d \n",ptr->data);
*/
do{
printf("\t %d \n",ptr->data);
ptr=ptr->link;
}while(ptr!=head);
//print(head);
getch();
}