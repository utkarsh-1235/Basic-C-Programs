#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,temp,a[100];
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the in elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0&&a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("\t array after insertion sort is \n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
getch();
}