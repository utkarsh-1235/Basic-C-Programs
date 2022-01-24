#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,*ptr,sum=0,*p,i;
clrscr();
printf("enter the size of array");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
p=ptr;
printf("enter the elements in array");
for(i=1;i<=n;i++)
{
scanf("%d",ptr);
sum=sum+*ptr;
ptr++;
}
printf("array elements");
for(i=1;i<=n;i++)
{
printf("%d",*p);
p++;
}
printf("addition is%d",sum);
getch();
}