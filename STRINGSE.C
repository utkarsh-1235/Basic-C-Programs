#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[50][50],s[50],ele[50];
int i,n,l;
clrscr();
printf("\t enter the number of strings \n");
scanf("%d",&n);
printf("\t enter the strings \n");
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
}
printf("\t enter the string for search \n");
scanf("%s",ele);
for(i=0;i<n;i++)
{
l=strcmp(str[i],ele);
if(l==0)
{
printf("%s string is found at %d position \n",ele,i+1);
}
else
{
printf("\t element is not found \n");
}
}
getch();
}