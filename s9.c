#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    int d;
    printf("Enter first input: \t");
    gets(str1);
    printf("\nEnter last input: \t");
    gets(str2);

    d= strcmp(str1,str2);
    if(d==0)
{
    printf("Equal");
}
else{
    printf("Not Equal");
}


}