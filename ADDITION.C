#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j;
clrscr();
printf("enter the range");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[3][3]);
}
}
printf("enter the range of b");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("addition of matrix  is");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d \n",c[i][j]);
}
}
getch();
}