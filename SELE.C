#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,loc,min,temp,a[100];
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
min=a[i];
loc=i;
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
min=a[j];
loc=j;
}
temp=a[min];
a[min]=a[loc];
a[loc]=temp;
}
}
printf("\t array after selection sort is : \n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
}