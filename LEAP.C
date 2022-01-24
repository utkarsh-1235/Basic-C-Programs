#include<stdio.h>
#include<conio.h>
void main()
{
int leap,b;
clrscr();
printf("enter the year");
scanf("%d",&leap);
b=leap%400;
if(b==0)
{
printf("it is a leap year");
}
else
{
printf("it is not aleap year");
}
getch();
}
