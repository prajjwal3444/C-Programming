
#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,num1,num2;
clrscr();
printf("Enter the two value");
scanf("%d %d",&num1, &num2);

//printf("multiplicationtable for %d\n",num);
for(num=num1; num<=num2; num++)
{
for(i=1; i < 11; i++){
printf("%d x %d = %d\n",num,i,num*i);
}}
getch();
}