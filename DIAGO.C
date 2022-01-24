#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100][100],b[100],n,min;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
b[i]=0;
for(j=0;j<n;j++)
{
if(i==j)
{
b[i]=b[i]+a[i][j];
}
}
}
printf("\t diagonal elements are \n");
for(i=0;i<n;i++)
{
printf("%d \n",b[i]);
}
min=b[0];
for(i=0;i<n;i++)
{
if(b[i]>min)
{
min=b[i];
}
}
printf("\t largest element in second array is:%d",min);
getch();
}