#include<stdio.h>
#include<conio.h>
void main()
{
char str[100],n,i,j,count=0;
clrscr();
printf("\t enter the size of string \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<=(n-i)-1;j++)
{
if(str[j]==str[j+1])
{
printf("\t %s \n",str[j]);
}
}
}
getch();}