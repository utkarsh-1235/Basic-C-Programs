#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[100],b[100],j=0;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i<n-1)
{
b[i]=a[i+1];
}
else
{
b[n-1]=a[j];
}
}
for(i=0;i<n;i++)
{
printf("\t %d \n",b[i]);
}
getch();
}