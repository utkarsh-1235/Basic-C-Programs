#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],temp,i,n;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
/*temp=a[i];
a[i]=a[n-i];
a[n-i]=temp;*/
printf("\t reverse is=>%d \n",a[i]);
}
getch();
}

