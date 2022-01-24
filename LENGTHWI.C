#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[100];
int l=0;
clrscr();
printf("\t enter the string \n");
scanf("%s",str1);
while(str1[l]!='\0')
{
l++;
}
printf("%d",l);
getch();
}