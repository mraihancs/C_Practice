#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter Sentence: \t");
    gets(str);
    strrev(str);
    printf("Reverse : %s\t",str);
}