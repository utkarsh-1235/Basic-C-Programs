#include<stdio.h>
#include<conio.h>
void main()
{
int i,r,m,num,c,x,t,temp,n;
clrscr();
printf("enter the three digit number ");
scanf("%d",&n);
temp=n;
for(i=1;i<=3;i++)
{
r=n%10;
t=n/10;
m=t%10;
x=t/10;
num=r*r*r+m*m*m+x*x*x;
}
printf("%d \n",num);
if(temp==n)
{
printf("it is an armstrong number");
}
else
{
printf("it is not an armstrong number");
}
getch();
}