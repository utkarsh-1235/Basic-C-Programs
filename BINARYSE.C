#include<stdio.h>
#include<conio.h>
void main()
{
int f=0,m=0,e,i,search,n,a[50];
clrscr();
scanf("%d",&n);
printf("enter %d integer in ascending order",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value for search");
scanf("%d",search);
while(f<=i)
{
m=(f+i)/2  ;
if(a[m]<search)
{
f=m+1;
}
else if (a[m]==search)
{
printf("%d found at %d\n",search,m+1);
break;
}
else
{
e=m-1;
}
}
if(f>e)
{
printf("%d not found \n",search);
}
getch();
}