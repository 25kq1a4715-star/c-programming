
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("please enter a number between 1 and 5 : ");
scanf("%d",&a);
switch(a)
{
case 1:
printf("you choose one");
break;
case2:
printf("you choose two");
break;
case 3:
printf("you choose three");
break;
case 4:
printf("you choose four");
break;
case 5:
printf("you choose five");
break;
default:
printf("invalid choice , enter a number between 1 and 5");
break;
}
getch();
}