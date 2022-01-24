#include<stdio.h>
#include<conio.h>
void sumNat(int i,int n,int sum)
{
if(i==n)
{
sum=sum+i;
printf("\t %d \n",sum);
return ;
}
sum=sum+i;
sumNat(i+1,n,sum);
}
void main()
{
int i,sum=0,n;
clrscr();
printf("\t enter the value \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sumNat(i,n,sum);
}
getch();
}