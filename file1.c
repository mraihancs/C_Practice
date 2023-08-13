#include<stdio.h>
int main()
{

// first simple code for file
////
//
///
///
//
//
//
//
//
FILE   *fp;

fp = fopen("test.txt","w");

if(fp == NULL)
{
    printf("File doesn't exist");
}

else{
    printf("File is opened");

}
fclose(fp);


}