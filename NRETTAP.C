#include<stdio.h>
#include<conio.h>
void  main()
{
int i,j,k,n,a,c=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n-1;j>=1;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d",i);
}
for( a=1;a<=c;a++)
{
printf("%d",i);
}
c++;
n--;
printf("\n");
}
getch();
}