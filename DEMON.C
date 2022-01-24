#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[100];
clrscr();
printf("\t enter the size of an array \n");
scanf("%d",&n);
printf("No.:%d",n);
//ptr=(int*)malloc(n*sizeof(int));
//p=ptr;
printf("\t enter the elements in array \n");
for(i=0;i<n;i++)
{
printf("\t no. %d \n",i);
scanf(" %d ",&a[i]);
//sum=sum+*ptr ;
//ptr++;
}
/*printf("\t elements are \n");
for(i=0;i<n;i++)
{
//printf("\t %d \n",ptr);
}
//printf("\t addition is %d \n",sum);*/
getch();
}

