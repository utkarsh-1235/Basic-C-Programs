#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,m,arr[100][100],b[100],c[100],d[100];
clrscr();
printf("\t enter the rows and columns in an array \n");
scanf("%d %d",&n,&m);
printf("\t enter the elements of an array \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
k=i+j*n;
b[k]=arr[i][j];
c[k]=arr[i][j+1];
d[k]=arr[i][j+2];
}
}
for(k=0;k<n;k++)
{
printf("\t %d \n",b[k]);
}
printf(" ");
for(k=0;k<n;k++)
{
printf("\t %d \n",c[k]);
}
printf(" ");
for(k=0;k<n;k++)
{
printf("\t %d \n",d[k]);
}
getch();
}