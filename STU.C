#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[10];
}struct={101,"raman"};
main()
{
struct student stu1;
printf("roll no.%d",stu1.roll);
printf("name:%s",stu1.name);
scanf("%d",&stu1.roll);
scanf("%s",stu1.name);
getch();
}