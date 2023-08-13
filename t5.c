#include <stdio.h>
int main()
{
    char c[5];
    int i,count=0;
    printf("Enter Elements in characters:\n");
    for(i=0; i<5; i++)
        {
           scanf("%s",&c[i]);
        }

    for(i=0; i<5; i++)
        {
         if(c[i]=='d')
        {
            if(c[i]==c[4])
                printf("New index is %d",i+1);
            else
                printf("New index is %d",i+2);

            count=1;
            break;

        }

    }

    if(count==0)
    printf("Element not found\n");
}