#include<stdio.h>
#include<conio.h>
int patt(int*n)
{
int i,j,k;
for(i=1;i<=*n;i++)
{
for(j=i;j<*n;j++)
{
printf(" ");
}
for(k=2*i-1;k>=1;k--)
{
printf("*");
}
printf("\n");
}
for(i=*n;i>=1;i--)
{
for(j=*n;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("*");
}
printf("\n");
}
return 0;
}
void main()
{
int a;
clrscr();
printf("\t enter the number \n");
scanf("%d",&a);
patt(&a);
getch();
}