#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,temp,swap=0,n,a[100];
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
swap=1;
}
}
if(swap==0)
{
break;
}
}
for(i=0;i<n;i++)
{
printf("\t %d \n",a[i]);
}
printf("\t second largest element in an array is:%d\n",a[n-2]);
printf("\t second smallest element in an array is:%d\n",a[1]);
getch();
}