#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[200];
};
void main()
{
struct student stu;
struct student *p;
p=&stu;
printf("\t enter the name of student \n");
scanf("%s",p->name);
printf("\t enter the roll number \n");
scanf("%d",&p->roll);
printf("\t student roll number is %d \n",(*p).roll);
printf("\t student name is %s \n",(*p).name);
getch();
}
