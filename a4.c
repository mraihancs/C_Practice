#include<stdio.h>
int main()
{

    int a[100];
    int count=-1;
    int n,p,i;


    printf("Searching elements: ");
    scanf("%d",&p);


    printf("Range: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    // taking searching variable, then take range then input array

    for(i=0;i<n;i++)
    {

        if(p==a[i])
            count= i+1;
        break;

    }

    if(count==-1)
    {
        printf("Not Found!!");
    }
else
 printf("Found at %d position",count);

}
