#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*stnode;
void createlist(int m)
{
struct node*fnode,*temp;
stnode=(struct node*)malloc(sizeof(struct node));
if(stnode==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{  int i,data;
printf("\t input the data for node 1 \n");
scanf("%d",&data);
stnode->data=data;
stnode->next=NULL;
temp=stnode;
for(i=2;i<=m;i++)
{
fnode=(struct node*)malloc(sizeof(struct node));
if(fnode==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t input the data for node %d \n",i);
scanf("%d",&data);
fnode->data=data;
fnode->next=NULL;
temp->next=fnode;
temp=temp->next;
}
}
}
}
void disp()
{
struct node*fnode;
if(stnode==NULL)
{
printf("\t no data found \n");
}
else
{
fnode=stnode;
while(fnode!=NULL)
{
printf("%d \n",fnode->data);
fnode=fnode->next;
}
}
}
void insertbeg(int data)
{
struct node*temp,*fnode;
if(stnnode==NULL)
{
printf("\t no data found \n");
}
else
{
temp=stnode;
fnode->data=data;
fnode->next=NULL;
}}
void main()
{
int m;
clrscr();
printf("\t enter the node \n");
scanf("%d",&m);
createlist(m);
disp();
getch();
}