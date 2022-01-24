#include<stdio.h>
#include<conio.h>
struct student
{
int marks[5];
int roll[5];
char name;
};
void main()
{
struct student stu[5] ;
int i;
printf("\t enter the details  of students \n");
for(i=0;i<5;i++)
{
printf("\t enter the roll no.%d student \n",i+1);
scanf("%d",stu[i].roll[i]);
printf("\t enter the marks of %d student \n",i+1);
scanf("%d",stu[i].marks[i]);
printf("\t enter the name of %d student \n",i+1);
scanf("%s",stu[i].name);
//printf("\n");
}
for(i=0;i<5;i++)
{
printf("\t %d \n",stu[i].roll[i]);
printf("\t %d \n",stu[i].marks[i]);
printf("\t %s \n",stu[i].name);
printf("\n");
}
getch();
}