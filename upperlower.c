#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

    int a[10][10],i,j,row,col;
    int usum=0;
    int lsum=0;
    printf("How many rows and cols: ");
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        
        }
    }

for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
            
        
        }
    }

     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
            {
                usum = usum + a[i][j];
            }
             else if(i>j)
            {
                lsum = lsum + a[i][j];
            }
        
        }
    }

    printf("\nsum of upper diagonal element is %d\n",usum);
printf("\nsum of lower diagonal element is %d\n",lsum);




}