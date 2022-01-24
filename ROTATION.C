#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,d,a[100],b[100];
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the digit for rotation \n");
scanf("%d",&d);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i-d>=0)
{
b[i-d]=a[i];
}
else
{
b[(i-d)+n]=a[i];
}
}
for(i=0;i<n;i++)
{
printf("\t %d \n",b[i]);
}
getch();
}