#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,n,a[100],*ptr;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
ptr=(int*)malloc(a[i]*sizeof int);
printf("\t %d \n",*ptr);
}
getch();
}