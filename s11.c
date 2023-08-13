#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int i=0,j=0,len=0;
char str1[10];
char str2[10];
printf("Enter your name: \t");
gets(str1);

printf("Enter your name: \t");
gets(str2);

while(str1[i]!='\0')
{
    i++;
    len++;
}

while(str2[j]!='\0')
{
    str1[len+j] = str2[j];
    j++;
}

printf("%s ", str1);

}