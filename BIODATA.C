#include<stdio.h>
#include<conio.h>
struct student
{
int roll[20];
int mark[20];
char name;
};
void main()
{
struct student stu[20];
int i,n;
printf("enter the number of students \n");
scanf("%d",&n);
printf("enter the details of student \n");
for( i=0;i<n;i++)
{
printf("enter the roll no. of %d student \n",i+1);
scanf("%d",&stu[i].roll[i] );
printf("enter the marks of %d student \n",i+1);
scanf("%d",&stu[i].mark[i]);
printf("enter the name of %d student \n",i+1);
scanf("%s",stu[i].name);
}
for(i=0;i<n;i++)
{
printf("roll no. of %d student \n",i+1);
printf("%d \n",stu[i].roll[i]);
printf("marks of %d student \n",i+1);
printf("%d \n",stu[i].mark[i]);
printf("name of %d student \n",i+1);
printf("%s \n",stu[i].name) ;
}
getch();
}