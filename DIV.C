#include<stdio.h>
#include<conio.h>
void main()
{
float num1,num2,div,mul;
clrscr();
printf("Enter the value of num1\n");
scanf("%f",&num1);
printf("Enter the value if num2\n");
scanf("%f",&num2);
div= num2/num1;
mul=num1*num2;
printf("div num2 by num1 =%f",div);
printf("mul num1 and num2 =%f",mul);
getch();
}