#include<stdio.h>
#include<conio.h>
void main()
{
unsigned int  n,*a,i,r,rev=0,temp;
clrscr();
printf("enter the number ");
scanf("%u",&n);
temp=n;
a=&n;
while(*a>0)
{
r=*a%10;
rev=rev*10+r;
*a=*a/10;
printf("reverse is%u \n",rev);
if(rev==temp)
{
printf("it is a pallindrome number");
}
else
{
printf("it is not pallindrome number");
}
}
getch();
}

