#include<stdio.h>
#include<conio.h>
void main()
{
int a,b, c;
float k;
printf("enter two numbers from user");
scanf("%d %d",&a,&b);
printf("enter1 for adding enter 2 for sub enter 3 for mul enter 4 div enter5 for modulo ");
scanf("%d",&c);
switch(c)
{
case 1:k=a+b;
printf("addition is=>%d \n", k);
break;
case 2:k=a-b;
printf("subtraction is =>%d \n",k);
break;
case 3: k=a*b;
printf("multiplication is =>%d \n",k);
break;
case 4:k=a/b;
printf("division is =>%d \n",k);
break;
case 5: k=a%b;
printf("remainder is =>%d \n",k);
break;
default:
printf("there is no case");
}
getch();
}


