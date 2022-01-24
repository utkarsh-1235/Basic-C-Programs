#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,d=2,n;
clrscr();
printf("enter the value");
scanf("%d",&n);
while(d<n)
{
c=a+b;
if(c%2!=0)
{
printf("%d \n",c);
d++;
}
a=b;
b=c;
}
getch();
}
