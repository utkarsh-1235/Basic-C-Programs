#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int l,i,j,v;
char name[20],n[20];
clrscr();
printf("enter the first string");
scanf("%s",name);
printf("enter the second string");
scanf("%s",n);
l=strlen(name);
v=strlen(n);
for(i=0;i<l;i++)
{
for(j=0;j<=i;j++)
{
printf("%c",name[j]);
}
printf("\n");
}
for(i=v;i>0;i--)
{
for(j=i;j>=0;j--)
{
printf("%c",n[j]);
}
printf("\n");
}
getch();
}