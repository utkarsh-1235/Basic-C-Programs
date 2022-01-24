#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;    //swapping performing without using third variable
clrscr();
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("number before swapping is=>%d %d \n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("number after swapping is=>%d \n",a);
printf("number after swapping is =>%d \n",b);
getch();
}

