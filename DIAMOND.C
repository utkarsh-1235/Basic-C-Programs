#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n-1;j>=1;j--)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("*");
}
printf("\n");
}
for(i=n-1;i>=1;i--)
{
for(j=1;j<=n-1;j++)
{
printf(" ");
}
for(k=2*i-1;k>=1;k--)
{
printf("*");
}
printf("\n");
}

getch();
}
