#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,n,ctr,f[100];
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
printf("\t element %d \n",i);
scanf("%d",&a[i]);
f[i]=-1;
for(i=0;i<n;i++)
{
ctr=1;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
ctr++;
f[j]=0;
}
}
if(f[i]!=0)
{
f[i]=ctr;
}
}
printf("\t  the frequency of all elements of array \n");
for(i=0;i<n;i++)
{
if(f[i]!=0)
{
printf("\t %d occurs %d times \n",a[i],f[i]);
}
}
}
getch();
}
