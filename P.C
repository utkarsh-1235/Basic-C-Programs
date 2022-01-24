#include<stdio.h>
#include<conio.h>
struct student
{
char name[100];
int mark[100];
int roll[100];
};
void main()
{
struct student stu[5];
int i;
printf("\t enter the details of student \n");
for(i=0;i<5;i++)
{
printf("\t enter the name of student \n");
scanf("%s",stu[i].name[i]);
printf("\t enter the marks of student");
scanf("%d",stu[i].mark[i]);
printf("\t enter the roll number of student \n");
scanf("%d",stu[i].roll[i]);
}
for(i=0;i<5;i++)
{
printf("\t name of student is \n");
printf("%s",stu[i].name[i]);
printf("\t marks of student \n");
printf("%d",stu[i].mark[i]);
printf("\t roll number of student is \n");
printf("%d",stu[i].roll[i]);
}
getch();
}