#include<stdio.h>
#define sf scanf
#define pf printf
int main()
{
    int a[10][10],T[10][10],i,j,row,col;
    //rows and columns
    sf("%d %d",&row,&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

            pf("A[%d][%d] = ",i,j);
            sf("%d",&a[i][j]);
        }
    }
    pf("A Matrix:\n");
    for(i=0;i<row;i++)
    {
        pf("\n");
        for(j=0;j<col;j++)
        {
            pf("%d\t",a[i][j]);
        }
    }

        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                T[j][i] = a[i][j];
            }
        }
            pf("Transpose Matrix:\n");
        for(i=0;i<col;i++)
        {
            pf("\n");
            for(j=0;j<row;j++)
            {
                pf("%d\t",T[i][j]);
            }
        }
}
