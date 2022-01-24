#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,temp,size,ar[10],swap;
clrscr();
printf("enter the size of array");
scanf("%d",&size);
printf("enter the range");
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<size-1;i++)
{
swap=0;
for(j=0;j<(size-i)-1;j++)
{
if(ar[j]>ar[j+1])
{
 swap=1;
 temp=ar[j];
 ar[j]=ar[j+1];
 ar[j+1]=temp;
 }
 if(swap==0)
 {
 break;
 }
 }
 }
 printf("array after bubble sort");
 for(i=0;i<size;i++)
 {
 printf("%d",ar[i]);
 }
 getch();
 }
