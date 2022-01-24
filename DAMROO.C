#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
clrscr();
printf("\t enter the number \n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=i;j<=n-1;j++)
{
printf(" ");
}
for(k=2*i-1;k>=1;k--)
{
printf("%d",k);
}
printf("\n");
}
for(i=1;i<=n;i++)
{
for(j=n-1;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("%d",k);
}
printf("\n");
}
getch();
}