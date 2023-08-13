#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int d;
    char str1[20];
    char str2[20];
    gets(str1);
    gets(str2);

   d = strcmp(str1,str2);
   if(d==0)
   {
       printf("Strings are equal");
   }
   else{
       printf("Strings are not equal");
   }
   
}