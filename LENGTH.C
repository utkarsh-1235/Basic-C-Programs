#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int l;
char str[100];
clrscr();
printf("\t input the string \n");
fgets(str,20,stdin);
l=strlen(str);
printf("\t length of the string is :%d\n",l);
getch();
}