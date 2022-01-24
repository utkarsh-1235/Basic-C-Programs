#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
int i,j,count;
clrscr();
printf("\t enter the string1: \n");
scanf("%s",str1);
printf("\t enter the string2: \n");
scanf("%s",str2);
i=0,j=0;
while(str1[i]!='\0')
{
i++;
}
while(str2[j]!='\0')
{
j++;
}
if(i!=j)
{
count=0;
}
else
{
for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
{
if(str1[i]==str2[j])
{
count=1;
}
}
}
if(count==0)
{
printf("\t strings are not equal \n");
}
else
{
printf("\t strings are equal \n");
}
getch() ;
}