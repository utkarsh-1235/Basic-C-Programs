#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[100];
};
void disp (struct student);
void main()
{
struct  student stu;
printf("\t enter the name of student \n");
scanf("%s",stu.name);
printf("\t enter the roll number \n");
scanf("%d",&stu.roll);
disp(stu);
getch();
}
void disp(struct student stu)
{
printf("\t student name is %s \n",stu.name);
printf("\t student roll number is %d \n",stu.roll);
}