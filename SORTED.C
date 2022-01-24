#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],temp=0,n;
clrscr();
printf("\t enter the size of array \n");
scanf("%d",&n);
printf("\t enter the elements of array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>=a[j]
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\t sorted array is \n");
for(i=0;i<n;i++)
{
printf("\t %d \n",a[i]);
}
getch();
}