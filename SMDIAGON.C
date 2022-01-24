#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a[3][3],sum;
clrscr();
printf("\t enter the elements of an array \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<3;k++)
{
sum=a[i][i]+a[j][j]+a[k][k];
printf("\t %d \n",sum
);
}
}
}
//printf("\t sum of diagonals is %d \n",sum);
getch();
}