#include<stdio.h>
int main()
{
        int a[10] = {10,20,30,40,50,60,40,50,90,15};
        int i,s;
        int pos=-1;

        printf("Enter Searching Number: ");
        scanf("%d",&s);
        for(i=0;i<10;i++)
        {
            if(s==a[i])
            {

                // here whenever i try to use if(a[i]==s) then the output is not found ..what's the cause behind this??
                pos= i+1;
                break;
        }
        }

        if(pos==-1)
        {
            printf("Not Found!!");
        }
        else{
            printf("Found at %d",pos);
        }

        }
