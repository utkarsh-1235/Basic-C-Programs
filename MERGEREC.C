#include<stdio.h>
#include<conio.h>
void merge(int arr[],int lb,int mid,int ub)
{
int i,j,k,b[100];
i=lb;
j=mid+1;
k=lb;
while(i<=mid&&j<=ub)
{
if(arr[i]<=arr[j])
{
b[k]=arr[i];
i++;
}
else if(arr[i]>=arr[j])
{
b[k]=arr[j];
j++;
}
k++;
}
if(i>mid)
{
while(j<=ub)
{
b[k]=arr[j];
j++;
k++;
}
}
else if(j>ub)
{
while(i<=mid)
{
b[k]=arr[i];
i++;
k++;
}
}
for(k=lb;k<=ub;k++)
{
arr[k]=b[k];
}
}
void mergesort(int arr[],int lb,int ub)
{
int mid;
if(lb<ub)
{
mid=(lb+ub)/2;
mergesort(arr,lb,mid);
mergesort(arr,mid+1,ub);
merge(arr,lb,mid,ub);
}
}
void main()
{
int i,n,arr[100];
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
mergesort(arr,0,n-1);
for(i=0;i<n;i++)
{
printf("\t %d \n",arr[i]);
}
getch();
}