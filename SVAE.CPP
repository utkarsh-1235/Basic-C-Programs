#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,j;
char a[20];
clrscr();
printf("enter the string");
scanf("%s",a[20]);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
printf("%c",a[j]);
}
//for(k=1;k<=2*i-1;k++)
//{
//printf("%s",a[k]);
//}
printf("\n");
}
getch();
}