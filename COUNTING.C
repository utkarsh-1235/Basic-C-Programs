#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],count[100],i,n,k,b[100],temp;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elemnts of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\t enter the range of elements of an array you entered \n");
scanf("%d",&k);
for(i=0;i<n;i++)
{
count[a[i]]++;
}
for(i=1;i<=k;i++)
{
count[i]=count[i]+count[i-1];
}
for(i=n-1;i>=0;i--)
{
temp=--count[a[i]];
b[temp]=a[i];
}
for(i=0;i<n;i++)
{
a[i]=b[i];
}
for(i=0;i<n;i++)
{
printf("\t %d \n",a[i]);
}
getch();
}