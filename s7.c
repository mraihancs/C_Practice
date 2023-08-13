#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

char str[100];
char str1[100];
printf("Enter First Name: \t");
gets(str);
printf("\nEnter Last Name: ");
gets(str1);

strcat(strcat(str," "),str1);
printf("%s",str);



}