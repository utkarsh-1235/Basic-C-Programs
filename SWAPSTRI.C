#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[100],str2[100],temp[100];
clrscr();
printf("\t enter the string1: \n");
scanf("%s",str1);
printf("\t enter the string2: \n");
scanf("%s",str2);
strcpy(temp,str1);
strcpy(str1,str2);
strcpy(str2,temp);
printf("\t %s \n %s",str1,str2);
getch();
}