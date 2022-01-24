#include<stdio.h>
#include<conio.h>
int binarysearch(int a[],int f,int e,int search)
{
int m;
if(f>e)
{
return -1;
}
m=(f+e)/2;
if(search==a[m])
{
return m;
}
else if(search<a[m])
{
return binarysearch(a,f,m-1,search);
}
else
{
return binarysearch(a,m+1,e,search);
}
}
void main()
{
int i,index,n,f,e,a[100],search;
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("\t enter the elements in ascending order \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
f=0;
e=n-1;
printf("\t enter the element for search \n");
scanf("%d",&search);
index=binarysearch(a,f,e,search);
if(index!=-1)
{
printf("\t element found at index %d \n",index);
}
else
{
printf("\t element not found in an array \n");
}
getch();
}