#include<stdio.h>
#include<conio.h>
int sum(int*u,int*v)
{
int diff,add;
add=*u+*v;
diff=*u-*v;
printf("\t addition of two numbers is %d \n \t difference is %d \n",add,diff);
return 0;
}
void main()
{
int a,b;
printf("\t enter two numbers \n");
scanf("%d %d",&a,&b);
sum(&a,&b);
getch();
}