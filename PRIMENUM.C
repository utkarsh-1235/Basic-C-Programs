#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,prime;
clrscr();
printf("enter the number ");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
prime=0;
break;
}
}
if(prime==0&&n!=2)
{
printf("it is not a prime number");
}
else
{
printf("it is a prime number");
}
getch();
}