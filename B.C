#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,count=0,a[100],ele,n;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements for searching");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(ele==a[i])
{
count++;
printf("\t yes element is present \n");
}
}
printf(" element is present %d times",count);
getch();}