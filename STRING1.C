#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[10];
int i;
printf("enter the name");
scanf("%s",name);
i=strlen(name) ;
printf("length is %s",name);
getch();
}