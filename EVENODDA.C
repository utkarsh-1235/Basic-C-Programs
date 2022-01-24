#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],n,t;
clrscr();
printf("\t enter the size of an array \t");
scanf("\t %d",&n);
printf("\t enter the elements in array \t");
for(i=0;i<n;i++)
{
scanf("\t %d",&a[i]);
}
printf("\t enter the even or odd number \n");
scanf("%d",&t);
for(i=0;i<n;i++)
{
if(t==a[i])
{
printf("\t it is present in an array \n");
if(t%2==0)
{
printf("\t it is an even number \t",t);
}
else
{
printf("\t it is an odd number \n");
}
}
else if(t!=a[i])
{
printf("\t it is not present in an array \n");
}
}
getch();
}
