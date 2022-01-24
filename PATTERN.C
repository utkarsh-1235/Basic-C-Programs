#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,t;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
t=2*i-1;
for(j=n-1;j>=1;j--)
{
printf(" ");
}
for(k=1;k<=t;k++)
{
printf("*");
}
printf("\n");
}
getch();
}