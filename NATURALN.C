#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter the number");
printf("how many times loop will terminate");
scanf("%d %d",&i,&n);
do{
printf("sum of n natural numbers are=>%d \n",i);
i++;
}while(i<n);
getch();
}
