#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{

    int array[100], sum=0,i,n;

    pf("Range: ");
    sf("%d",&n);
    for(i=0;i<n;i++){
    {
    sf("%d",&array[i]);
    }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }

   pf("Sum is: %d",sum) ;

}
