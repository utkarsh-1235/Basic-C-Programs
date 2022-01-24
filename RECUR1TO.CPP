#include<stdio.h>
#include<conio.h>
void recur(int n)
{
if(n==0)
{
return ;
}
printf("\t %d \n",n);
recur(n-1);
}
void main()
{
int n;
clrscr();
printf("\t enter the value  \n");
scanf("%d",&n);
recur(n);
//printf("\t %d \n",t);
getch();
}