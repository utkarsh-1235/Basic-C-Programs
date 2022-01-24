#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;   //swapping performing using three variables
clrscr();
printf("enter two numbers ");
scanf("%d %d",&a,&b);
printf("number before swapping is=> %d %d \n",a,b);
c=a;
a=b;
b=c;
printf("number after the swapping is=> %d %d \n",a,b);
getch();
}