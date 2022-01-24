#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n,k,a,c=0;
clrscr();
printf("enter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n-1;j>=1;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d",k);
}
for(a=1;a<=c;a++)
{
printf("%d",a);
}
c++;
n--;
printf("\n");
}
getch();
}