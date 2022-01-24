#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *p,n;
clrscr();
printf("\t enter the value of n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int)) ;
printf("\t %d \n",p);
getch();
}