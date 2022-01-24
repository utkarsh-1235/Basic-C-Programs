#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[100],n,*p;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the element of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\t elements of an array \n");
for(i=0;i<n;i++)
{
p=&a[i];
printf("\t %d \n",*p);
}
getch();
}