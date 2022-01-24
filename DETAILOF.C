#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[10];
};
void main()
{
struct student stu[5];
int i;
clrscr();
printf("\nenter the details of five student");
for(i=0;i<5;i++)
{
printf("\nenter the roll no.=>%d",i+1);
scanf("%d",&stu[i].roll);
printf("\nenter name for student=>%d ",i+1);
scanf("%s",stu[i].name);
}
printf("details for students=>");
for(i=0;i<5;i++)
{
printf("\nenter the roll no=>.%d",i+1);
printf("%d",stu[i].roll);
printf("\nenter the name of students=> %d",i+1);
printf("%s",stu[i].name);
}
getch();
}