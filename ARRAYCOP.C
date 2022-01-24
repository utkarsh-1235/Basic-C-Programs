#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],i,n;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b[i]=a[i];
printf("\t %d \n",b[i]);
}
getch();
}