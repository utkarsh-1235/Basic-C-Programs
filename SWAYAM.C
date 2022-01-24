#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
int marks[5];
char name;
};
void main()
{
struct student stu;
int i,sum=0;
printf("enter the roll no.");
scanf("%d",&stu.roll);
printf("enter the name");
scanf("%s",stu.name);
printf("enter the marks of 5 subject");
for(i=0;i<5;i++)
{
scanf("%d",&stu.marks[i]);
sum=sum+stu.marks[i];
}
for(i=0;i<5;i++)
{
printf("%d \n",stu.marks[i]);
}
printf("%d \n",sum);
getch();
}