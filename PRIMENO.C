#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a;
clrscr();
printf("enter the number");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
a=n%i;
if(a==0)
{
printf("it id not prime number %d",a);
getch();
goto end;
}
}
printf("it is an prime number");
getch();
end:
}
