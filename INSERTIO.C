#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,temp,a[20];
clrscr();
printf("enter the size ");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0&&a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1] =temp;
}
printf("elements after insertion sort");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
}