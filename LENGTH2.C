#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int l;
char str[100];
l=0;
clrscr();
printf("\t input the string is: \n");
fgets(str,20,stdin);
while(str[l]!=NULL)
{
l++;
}
printf("\t length of the string is: %d \n",l-1);
getch();
}