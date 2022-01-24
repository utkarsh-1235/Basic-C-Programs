#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i,j,l,count=0,temp=0,cur;
char res=str[0];
clrscr();
gets(str);
l=strlen(str);
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(str[i]==str[j]&&i==0)
{
count++;
}
if(str[i]==str[j]&&i>0)
{
count=1;
count++;
}
/*{
break;
}*/}}
for(i=0;i<l;i++)
{
cur=1;
for(j=i+1;j<l;j++)
{
if(str[i]!=str[j])
break;
cur++;
}
if(cur>temp)
{
temp=cur;
res=str[i];
}
}
printf("\t %c \n",res);
printf("\t %d \n",count);
getch();
}