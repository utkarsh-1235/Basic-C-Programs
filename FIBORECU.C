#include<stdio.h>
#include<conio.h>
void fibo(int a,int b,int n)
{
int c;
if(n==0)
{
return ;
}
c=a+b;
printf("\t %d \n",n);
fibo(b,c,n-1);
}
void main()
{
int a=0,b=1,n;
clrscr();
printf("\t %d \n",a);
printf("\t %d \n",b);
//printf("\t enter the number \n");
scanf("%d",&n);
fibo(a,b,n-2);
getch();
}