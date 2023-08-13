#include<stdio.h>
int main()
{
    FILE *fpf;
    char name[100];
    int age;

    /*


            ***************************************
            fprintf is using here...........
            ***************************************


    */
    fpf = fopen("test7.txt","a");

    if(fpf==NULL)
    {
        printf("File doesn't Exists");

    }

    else{
            printf("\nEnter Your Name: \n");
            gets(name);
            printf("\nEnter your age: ");
            scanf("%d",&age);

            fprintf(fpf, "%s %d\n",name,age);
            


    printf("file is written successfully....thank's for your participation..!!");
fclose(fpf);
    }



}