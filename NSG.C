#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
struct node *prev;
};
void print(struct node *n)
{
while(n!=NULL)
{
printf("%d",n->data);
}
n=n->link;
};
void scan(struct node *m)
{
while(m!=NULL)
{
printf("%d",m->data);
}
m=m->prev};