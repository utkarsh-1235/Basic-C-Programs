#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,swap=0,n,temp,a[100];
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
for(j=0;j<(n-i)-1;j++)
{
if(a[j]>=a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
swap=1;
}
}
if(swap==0)
{
break;
}
}
printf("\t array after bubble sort is \n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
getch();
}