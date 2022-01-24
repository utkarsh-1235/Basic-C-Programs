#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,rev=0,a,b,t;
clrscr();
printf("\t enter the number \n");
scanf("%d",&n);
t=n;
while(n>0)
{
a=n%10;
rev=rev*10+a;
n=n/10;
}
printf("\t %d \n",rev);
if(t==rev)
{
printf("\t number is pallindrome \n");
}
else
{
printf("\t number is not pallindrome \n");
}

getch();

}