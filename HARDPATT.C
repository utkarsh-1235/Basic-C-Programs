#include<stdio.h>
#include<conio.h>
int diam(int);
void main()
{int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
diam(n);
getch();
}
int diam(int x)
{
int i,j,k;
for(i=1;i<=x;i++)
{
for(j=x-1;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("*");
}
printf("\n");
}
for(i=x-1;i>=1;i--)
{
for(j=i;j<=x-1;j++)
{
printf(" ");
}
for(k=2*i-1;k>=1;k--)
{
printf("*");
}
printf("\n");
}
return x;

}



