#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,rev,r,temp;
clrscr();
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
rev=rev+r*r*r;
n=n/10;
printf("%d",rev);
}
if(rev==temp)
{
printf("it is an armstrong number");
}
else
{
printf("it is not an armstrong number");
}
getch();
}