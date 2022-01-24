#include<stdio.h>
#include<conio.h>
void main()
{
int i,s1,s2,s3,a[100],b[100],c[100],ins,p;
clrscr();
printf("\t enter two array and merge it as asingle array \n");
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
for(i=0;i<s1;i++)
{
c[i]=a[i];
c[i+s2]=b[i];}
}
s3=s1+s2;
printf("\t merge array is \n");
for(i=0;i<s3;i++)
{
printf("\t %d \n",c[i]);
}
/*printf("\t insert the element \n");
scanf("%d",&ins);
printf("\t enter the position of element \n");
scanf("%d",&p);
for(i=s3;i>=p;i--)
{
a[i]=a[i-1] ;
}
a[p-1]=ins;
printf("\t inserting element is \n");
for(i=0;i<s3+1;i++)
{
printf("\t %d \n",c[i]);
} */
getch();
}