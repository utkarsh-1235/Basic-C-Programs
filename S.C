#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
printf("value of a before swapping is %d \n",a);
printf("value of b before swapping is %d \n",b);
a=a+b;
a=a-b;
a=a-b;
printf("value of a after swapping is %d \n",a);
printf("value of b after swapping is %d \n",b);
getch();
}
