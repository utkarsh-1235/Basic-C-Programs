#include<stdio.h>
#include<conio.h>
void merge(int a[],int b[],int c[],int m,int n)
{
int i,j,k;
i=j=k=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
k++;
i++;
}
else
{
c[k]=b[j];
k++;
j++;
}
}
while(i<m)
{
c[k]=a[i];
k++;
i++;
}
while(j<n)
{
c[k]=b[j];
k++;
j++;
}
}
void main()
{
  int i,n,m,a[100],b[100];
  clrscr();
  printf("\t enter the value of m \n");
  scanf("%d",&m);
  printf("\t enter the value of n \n");
  scanf("%d",&n);
  printf("\t enter the elements of array a \n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("\t enter the elements of array b \n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&b[i]);
  }
}