#include<stdio.h>
#include<conio.h>
void main()
{
int i,k,j,a[3][3],b[3][3],c[3][3];
clrscr();
printf("enter the elements of matrix a");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",a[i][j]);
}
}
printf("enter the elements of b");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",b[i][j]);
}
}
printf("multiplication of matrix b is");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=0;
for(k=0;k<3;k++)
{
c[i][j]=c[i][j]+a[i][j]*b[i][k];
printf("%d",c[i][j]);
}
}
}
getch();
}