#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a[100],b[100],c[100],s1,s2,s3;
clrscr();
printf("\t enter the size of first array \n");
scanf("%d",&s1);
printf("\t enter the elements of first array \n");
for(i=0;i<s1;i++)
{
scanf("%d",&a[i]);
}
printf("\t enter the size of second array \n");
scanf("%d",&s2);
printf("\t enter the elements of second array \n");
for(i=0;i<s2;i++)
{
scanf("%d",&b[i]);
}
s3=s1+s2;
for(i=0;i<s1;i++)
{
c[i]=a[i];
c[i+s2]=b[i];
}
for(j=0;j<s2;j++)
{
c[i]=b[j];
i++;
}
printf("\t this is merge array \n");
for(i=0;i<s3;i++)
{
printf("\t%d \n",c[i]);
}
for(i=0;i<s3;i++)
{
for(k=0;k<s3;k++)
{
if(c[k]>c[k+1])
{
j=c[k];
c[k]=c[k+1];
c[k+1]=j;
}
}
}
printf("\t this is merge array after sorting \n");
for(i=0;i<s3;i++)
{
printf("\t %d \n",c[i]);
}
getch();
}