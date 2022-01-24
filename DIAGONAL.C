#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[3][3],b[3][3];
clrscr();
//printf("\t enter the size \n");
//scanf("%d",&n);
printf("\t enter the elements \n");
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
b[j][i]=a[i][j];
}
}
printf("\t transpose of matrix a is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t %d \n",b[i][j]);
}
}
getch();
}
