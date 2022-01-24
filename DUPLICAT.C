#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a[100],b[100],c[100],n,temp;
clrscr();
printf("enter the size of an array");
scanf("%d",&n);
printf("enter the elements of an array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
temp=0;
for(j=0;j<n+1;j++)
{
 if(i!=j)//increment the counter when the search value is duplicate
 {
 if(a[i]==a[j])
 {
 temp++;
 }
 }
 }
 if(temp==0)
 {
 printf("\t %d \n",a[i]);
 }
 }
 getch();
 }
