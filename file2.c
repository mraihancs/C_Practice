#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test1.txt","a");
    if(file==NULL)
    {
        printf("File not created");
    }
    else{
        printf("File is opened");

    }
    fclose(file);
}
