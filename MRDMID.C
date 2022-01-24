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
struct node *end,*temp;
int i,data;
start=(struct node*)malloc(sizeof(struct node));
if(start==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t enter the data for node1: \n");
scanf("%d",&data);
start->data=data;
start->next=NULL;
temp=start;
for(i=2;i<=m;i++)
{
end=(struct node*)malloc(sizeof(struct node));
if(end==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t enter the data for node%d: \n",i);
scanf("%d",&data);
end->data=data;
end->next=NULL;
temp->next=end;
temp=temp->next;
}
}
}
}
void disp()
{
struct node *temp;
if(start==NULL)
{
printf("\t no data found in the list \n");
}
else
{
temp=start;
while(temp!=NULL)
{
printf("\t data is:%d \n",temp->data);
temp=temp->next;
}
}
}
void insertmid(int data,int pos)
{
struct node *end,*temp;
int i;
end=(struct node*)malloc(sizeof(struct node));
if(end==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
end->data=data;
end->next=NULL;
temp=start;
for(i=2;i<=pos-1;i++)
{
temp=temp->next;
if(temp==NULL)
{
break;
}
if(temp!=NULL)
{
end->next=temp->next;
temp->next=end;
}
else
{
printf("\t insertion is not possible \n");
}
}
}
}
void main()
{
int m,data,pos;
clrscr();
printf("\t enter the number of nodes \n");
scanf("%d",&m);
creation(m);
disp();
printf("\t insert the data in the beginning \n");
scanf("%d",&data);
printf("\t enter the position of the data \n");
scanf("%d",&pos);
insertmid(data,pos);
disp();
getch();
}