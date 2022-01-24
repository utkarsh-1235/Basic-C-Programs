#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node*left,*right;
}*newnode;
struct node*create()
{
int data;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\t memory cannot be allocated \n");
}
else
{
printf("\t enter the data in the node,-1 for no node \n");
scanf("%d",&data);
if(data==-1)
{
return 0;
}
newnode->data=data;
printf("\t for left nodeof %d \n",data);
newnode->left=create();
printf("\t for right node %d \n",data);
newnode->right=create();
return newnode;
}
return newnode;
}
/*void disp()
{
if(newnode==NULL)
{
printf("\t no data found \n");
}
else
{
while(newnode!=NULL)
{
printf("\t %d \n",newnode->data);
newnode=newnode->right;
}}} */
void main()
{
struct node*root;
clrscr();
root=create();
//disp();
printf("\t %d \n",*root);
getch();
}