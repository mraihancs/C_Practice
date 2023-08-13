#include<stdio.h>


int main()
{

char str[100];
int len;
printf("Enter Name: \t");
gets(str);

len = strlen(str);

printf("length is: %d",len);


}