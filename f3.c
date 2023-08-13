#include<stdio.h>
#include<conio.h>
#include<math.h>
int summation(int *p, int *q)
{
int sum;
sum = *p + *q;
return sum;
}

float average(int *p,int *q)
{
    float avg;

    avg = ((float)(*p)+(float)(*q))/2;
    return avg;



}

int main()
{

    int a,b;
    int sum;
    float avg;
        int *p;
     int *q;
     p=&a;
     q=&b;

    printf("Enter value for a and b: ");
    scanf("%d %d",&a,&b);
 

     

     sum=summation(p,q);

     printf("Sum of a+b is: %d\n",sum);

    avg= average(p,q);
    printf("\nAverage is : %0.2f",avg);


}
