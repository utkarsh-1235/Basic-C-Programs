#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter the number");
scanf("%d",&n);
while(n<20)
{
n=n+2;
printf("sum of odd natural numbers are=>%d \n",n);
}
getch();
}