#include<stdio.h>
#include<conio.h>
void swap(int*a,int*b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int partition(int arr[],int low,int high)
{
int pivot,i,j;
pivot=arr[high];
i=low-1;
for(j=low;j<=high-1;j++)
{
if(arr[j]<pivot)
{
i++;
swap(&arr[i],&arr[j]);
}}
swap(&arr[i+1],&arr[high]);
return (i+1);
}
void quicksort(int arr[],int low,int
high)
{
int pi;
if(low<high)
{
pi=partition(arr,low,high);
quicksort(arr,low,pi-1);
quicksort(arr,pi+1,high);
}}
void main()
{
int arr[100],i,n;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
quicksort(arr,0,n-1);
for(i=0;i<n;i++)
{
printf("\t %d \n",arr[i]);
}
getch();
}