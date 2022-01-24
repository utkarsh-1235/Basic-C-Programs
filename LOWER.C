#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("enter the number");
scanf("%d",&a);
if(a>=97 && a<=122)
{
printf("it is lowercase ");
}
else
{
printf("it is not a lowercase");
}
getch();
}