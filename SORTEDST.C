#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[50][50],s[50];
int round,r,i,n;
clrscr();
printf("\t enter the number of strings \n");
scanf("%d",&n);
printf("\t enter the strings \n");
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
}
for(round=1;round<=n-1;round++)
{
for(i=0;i<=(n-1)-round;i++)
{
r=strcmp(str[i],str[i+1]);
if(r>0)
{
strcpy(s,str[i]);
strcpy(str[i],str[i+1]);
strcpy(str[i+1],s);
}
}
}
for(i=0;i<n;i++)
{
printf("%s \n",str[i]);
}
getch();
}