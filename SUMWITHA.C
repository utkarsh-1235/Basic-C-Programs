#include<stdio.h>
#include<conio.h>
void main()
{ int i,a[10],c[10];
clrscr();
printf("enter the range");
for(i=0;i<=9;i++)
{
scanf("%d",&a[i]) ;
}
for(i=0;i<=9;i++)
{
printf("%d",a[i]);
}
getch();
}