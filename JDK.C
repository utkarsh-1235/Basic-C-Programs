#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter the number except 1");
scanf("%d %d",&i,&n);
do
{
i=i*(i-1);
printf("factorial is=>%d \n",i);
}while(i<n);
getch();
}