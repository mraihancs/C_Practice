#include<stdio.h>
#define sf scanf
#define pf printf
int main()
{
    int array[100];
    int n,i;
    pf("Range: ");
    sf("%d",&n);
    for(i=0;i<n;i++)
    {
        sf("%d",&array[i]);
    }
    int max = array[0];
    for(i=1;i<n;i++)
    {

        if(max<array[i])
        {
            max = array[i];
        }




    }

 pf("Maximum number is: %d",max);


}
