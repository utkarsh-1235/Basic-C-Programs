#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],b[100],c[100],s1,s2,s3,temp=0;
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&s1);
printf("\t enter the elements of an array \n");
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
for(i=0;i<s1;i++)
{
c[i]=a[i];
c[i+s2]=b[i];
}
s3=s1+s2;
for(i=0;i<s3;i++)
{
printf("\t %d \n",c[i]);
}
//sorting
for(i=0;i<s3;i++)
{
for(j=i+1;j<s3;j++)
{
if(c[i]>=c[j])
{
 temp=c[i];
 c[i]=c[j];
 c[j]=temp;
}
}
}
printf("\t merge and sorted array in ascending order is \n");
for(i=0;i<s3;i++)
{
printf("\t %d \n",c[i]);
}
getch();
}