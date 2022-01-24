#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*start;
void creation(int m)
{
int i,data;
struct node *temp,*mid;
start=(struct node*)malloc(sizeof(struct node));
if(start==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t enter the node1: \n");
scanf("%d",&data);
start->data=data;
start->next=NULL;
temp=start;
for(i=2;i<=m;i++)
{
mid=(struct node*)malloc(sizeof(struct node));
if(mid==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t enter the data");
scanf("%d",&data);
mid->data=data;
mid->next=NULL;
temp->next=mid;
temp=mid;
temp->next=start;
}
}
}
}
void disp()
{
struct node*temp;
if(start==NULL)
{
printf("\t no data found in the memory \n");
}
else
{
temp=start;
do{
printf("\t %d \n",temp->data);
temp=temp->next;
}while(temp!=start);
}
}
void main()
{
int m;
clrscr();
printf("\t enter the number of nodes \n");
scanf("%d",&m);
creation(m);
disp();
getch();
}