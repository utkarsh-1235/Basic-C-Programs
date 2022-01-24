#include<stdio.h>
#include<conio.h>
int swap(int*,int*);
void main()
{
int a,b,*u,*v;
clrscr();
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
u=&a;
v=&b;
printf("value of a before swapping is=>%d \n",*u);
printf("value of b before swapping is=>%d \n",*v);
swap(&a,&b);
printf("value of a after swapping is=>%d \n",*u);
printf("value of b after swapping is= %d \n",*v);
getch();
}
int swap(int*x,int*y)
{
int t;
t=*x;
*x=*y;
*y=t;
printf("value of a during swapping is=>%d \n",*x);
printf("value of b during swapping is=>%d \n",*y);
return t;
}