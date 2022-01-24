#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
void creation(int m)
{
struct node *stnode=NULL,*temp,*fnode=NULL;
int data,i;
stnode=(struct node*)malloc(sizeof(struct node));
if(stnode==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t enter the data for node1: \n");
scanf("%d",&data);
stnode->data=data;
stnode->link=NULL;
printf("%d",stnode->data);
//stnode=temp;
for(i=2;i<=m;i++)
{
fnode=(struct node*)malloc(sizeof(struct node));
if(fnode==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t enter the data for node%d :\n",i);
scanf("%d",&data);
fnode->data=data;
fnode->link=NULL;
stnode->link=fnode;
//printf("%d",stnode->data);
}
}
while(stnode!=NULL)
{
printf("%d",stnode->data);
stnode=stnode->link;
}
}
}
/*void disp()
{
struct node*temp,*stnode;
if(stnode==NULL)
{
printf("\t list is empty \n");
}
else
{
//temp=stnode;
while(temp!=NULL)
{
printf("\t %d \n",temp->data);
temp=temp->link;
}
}
}*/
void main()
{
int m;
clrscr();
printf("\t enter the number of node");
scanf("%d",&m);
//printf("\t enter the data in the list \n");
creation(m);
printf("\t your list is : \n");
//disp();
getch();
}