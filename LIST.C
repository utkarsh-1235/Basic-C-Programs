#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int n;
struct node *link;
}*stnode;
void createnodelist(int m)
{
struct node *fnode,*tmp;
int n,i;
stnode=(struct node*)malloc(sizeof(struct node));
if(stnode==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t input the data for node 1: \n");
scanf("%d",&n);
stnode->n=n;
stnode->link=NULL;
tmp=stnode;
for(i=2;i<=m;i++)
{
fnode=(struct node*)malloc(sizeof(struct node));
if(fnode==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t input the data for node %d: \n",i);
scanf("%d",&n);
fnode->n=n;
fnode->link=NULL;
tmp->link=fnode;
tmp=tmp->link;
}
}
}
}
void disp()
{
struct node*tmp;
if(stnode==NULL)
{
printf("\t input data not found \n");
}
else
{
tmp=stnode;
while(tmp!=NULL)
{
printf("\t %d \n",tmp->n);
tmp=tmp->link;
}
}
}
void main()
{
struct node*stnode ;
int m;
clrscr();
printf("\t input the number of node \n");
scanf("%d",&m);
createnodelist(m);
printf("\t data entered in the list: \n");
disp();
getch();
}