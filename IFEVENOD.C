#include<stdio.h>
#include<conio.h>
void main()
{
int a,n;
clrscr();
printf("enter the number");
scanf("%d",&n);
a=n%2;
if(a==0)
{
printf("it is an even number");
}
else
{
printf("it is an odd number");
}
getch();
}