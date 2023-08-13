#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i=0,len=0;
    char str[100];
    gets(str);

    for(;str[i]!='\0';i++)
    {
    len++;
    }
    printf("Length is: %d\t",len);
}