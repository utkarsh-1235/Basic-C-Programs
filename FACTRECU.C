#include<stdio.h>
#include<conio.h>
int fact(int n)
{
if(n==1)
{
return 1;
}
n=n*fact(n-1);
printf("\t %d \n",n);
return n;
}
void main()
{
int n;
clrscr();
printf("\t enter the value \n");
scanf("%d",&n);
fact(n);
getch();
}