#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum;
    int *p1,*p2;
    printf("Enter value for a and b: ");
    scanf("%d %d",&a,&b);

    
    p1=&a;
    p2=&b;

    sum = *p1 + *p2;

    printf("Sum is: %d\n",sum);
}