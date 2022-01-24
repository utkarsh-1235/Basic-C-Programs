#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("enter four numbers");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b)
{
if(a>c)
{
if(a>d)
{
printf("a is greatest number among all four number %d\n",a);
}
else if(d>a)
{
printf("d is greatest number among all four number %d \n",d);
}
}
else if(c>a)
{
printf("c is greatest number among all four number %d\n",c);
}
}
if(b>a)
{
printf("b is greatest number among all four number %d\n",b);
}
getch();
}