#include<stdio.h>
#include<conio.h>
int main()
{
   char str[20];
   int i,c=0;
   clrscr();
   gets(str);
   for(i=0;i<=strlen(str);i++){
   if(str[i]==' ')
   c++;
   }
   printf("%s No of Spaces is %d",str,c);
   return 0;
}
