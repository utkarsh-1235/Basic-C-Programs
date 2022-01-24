#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next,*prev;
}*start,*end;
void creation(int m)
{
struct node *beg;
int i,data;
start=(struct node*)malloc(sizeof(struct node));
if(start==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t memory cannot be allocated \n");
scanf("%d",&data);
start->data=data;
start->next=NULL;
start->prev=NULL;
end=start;
for(i=2;i<=m;i++)
{
beg=(struct node*)malloc(sizeof(struct node));
if(beg==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t enter the data for %d node is \n",i);
scanf("%d",&data);
beg->data=data;
beg->next=NULL;
beg->prev=end;
end->next=beg;
end=beg;
}
}
}
}
void insertbeg(int data)
{
struct node*beg;
beg=(struct node*)malloc(sizeof(struct node));
if(beg==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
beg->data=data;
beg->next=start;
beg->prev=NULL;
start->prev=beg;
}
start=beg;
}
void disp()
{
struct node*temp;
if(start==NULL)
{
printf("\t no data found \n");
}
else
{
temp=start;
while(temp!=NULL)
{
printf("\t %d \n",temp->data);
temp=temp->next;
}
}
}
void dispreverse()
{
struct node*mid;
if(start==NULL)
{
printf("\t no data found \n");
}
else
{
mid=end;
while(mid!=NULL)
{
printf("\t %d \n",mid->data);
mid=mid->prev;
}
}
}

void main()
{
int m,data;
clrscr();
printf("\t enter the number of nodes \n");
scanf("%d",&m);
creation(m);
disp();
//printf("\t reverse is by the help of double linked list is \n");
//dispreverse();
printf("\t insert the data inthe beginning of the linked list \n");
scanf("%d",&data);
insertbeg(data);
disp();
printf("\t reverse is \n");
dispreverse();
getch();
}
