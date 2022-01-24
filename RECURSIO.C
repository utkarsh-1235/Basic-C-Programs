#include<stdio.h>
#include<conio.h>
/*int minIndex(int a[],int i,int j)
{
int k;
if(i==j)
{
return i;
}
k=minIndex(a,i+1,j);
return (a[i]<a[k])?i:k;
}*/
void recurselect(int a[],int n,int beg)
{
int min,temp,i;
if(beg==n-1)
{
return ;
}
min=beg;
for(i=beg;i<n;i++)
{
if(a[i]<a[min])
{
temp=a[min];
a[min]=a[beg];
a[beg]=temp;
}
recurselect(a,n-1,beg);
}
void main()
{
int beg=0,a[100],n;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(beg=0;beg<n;i++)
{
scanf("%d",&a[i]);
}
recurselect(a,n,beg);
for(beg=0;beg<n;beg++)
{
printf("\t %d \n",a[i]);
}
getch();
}