#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[100],b[100];
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\t reverse of array is \n");
for(i=n-1;i>=0;i--)
{
printf("%d \n",a[i]);
}
getch();
}