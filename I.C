#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[100],n,p,ins;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the element of an array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\t insert the number \n");
scanf("%d",&ins);
printf("\t enter the position of number \n");
scanf("%d",&p);
for(i=0;i<n;i++)
{
printf("\t %d \n",a[i]);
}
for(i=n;i>p;i--)
{
a[i]=a[i-1];
a[p-1]=a[p];
}
printf("\t array after insertion is \n");
for(i=0;i<=n;i++)
{
printf("\t %d \n",a[i]);
}
getch();
}