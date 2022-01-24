#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
void creation(int m)
{
struct node *start,*beg,*temp;
int data,i;
start=(struct node*)malloc(sizeof(struct node));
if(start==NULL)
{
printf("\t node cannot be allocated \n");
}
else
{
printf("\t enter the data for node1: \n");
scanf("%d",&data);
start->data=data;
start->link=NULL;
//temp=start;
//printf("node1 is: %d",data);
}
for(i=2;i<=m;i++)
{
beg=(struct node*)malloc(sizeof(struct node));
if(beg==NULL)
{
printf("\t node cannot be allocated \n");
}
else
{
printf("\t enter the node%d \n",i);
scanf("%d",&data);
beg->data=data;
beg->link=NULL;
start->link=beg;
/*printf(" ");
printf("\t node%d is %d \n",i,data);*/
}
}
}
void print()
{
struct node *temp,*start;
start
}
void insert(int ele)
{
  struct node*beg;
  beg=(struct node*)malloc(sizeof(struct node));
  if(beg==NULL)
  {
  printf("\t memory cannot be allocated \n");
  }
  else
  {
  beg->data=ele;
  beg->link=start;
  start=beg;
  }
}
void main()
{
int m;
clrscr();
printf("\t enter the number of node \n");
scanf("%d",&m);
creation(m);
getch();
}