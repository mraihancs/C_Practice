#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    int sum,a,b;
    a=20;
    b=30;
    int *p1,*p2;
    p1=&a;
    p2=&b;

sum = *p1 + *p2;
printf("Sum is: %d\n",sum);



}