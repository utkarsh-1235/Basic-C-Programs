#include<stdio.h>
#include<conio.h>
void main()
{
int ar[20],size,i,temp,loc,min,j;
clrscr();
printf("enter the number");
scanf("%d",&size);
printf("enter the range");
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<size;i++)
{
min=ar[i];
loc=i;
for(j=i+1;j<size-1;j++)
{
if(ar[j]<min)
{
min=ar[j];
loc=j;
}
}
temp=ar[i];
ar[i]=ar[loc];
ar[loc]=temp;
}
printf("array after selection sort");
for(i=0;i<size;i++)
{
printf("%d",ar[i]);
}
getch();
}
