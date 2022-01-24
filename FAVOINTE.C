#include<stdio.h>
#include<conio.h>
int patt(int*);
void main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
patt(&n);
getch();
}

int patt(int*t)
{
int i,j,k;
for(i=1;i<=*t;i++)
{
for(j=*t-1;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("*");
}
printf("\n");
}
for(i=*t-1;i>=1;i--)
{
for(j=i;j<=*t-1;j++)
{
printf(" ");
}
for(k=2*i-1;k>=1;k--)
{
printf("*");
}
printf("\n");
}
for(i=1;i<=*t;i++)
{
for(j=*t-1;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("*");
}
printf("\n");
}
for(i=*t-1;i>=1;i--)
{
for(j=i;j<=*t-1;j++)
{
printf(" ");
}
for(k=2*i-1;k>=1;k--)
{
printf("*");
}
printf("\n");
}
return i;
}
