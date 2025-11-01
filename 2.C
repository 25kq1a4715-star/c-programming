#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,c;
clrscr();
c=a;
c+=a;
printf("c=:%d",c);
c-=a;
printf("c=:%d",c);
c*=a;
printf("c=:%d",c);
c/=a;
printf("c=:%d",c);
c%=a;
printf("c=:%d",c);
getch();
}