#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
clrscr();
printf("\t input the string \n");
fgets(str,20,stdin);
printf("%s",str);
getch();
}