#include<stdio.h>
#include<conio.h>
int main()
{


FILE *op;

char str[50];
//
//
//          fputs using here...........
//
//


op = fopen("test5.txt","w");
if(op==NULL)
{
    printf("File doesn't exists");
}

else{

printf("Enter Your Name:\t");
gets(str);



fputs(str,op);


printf("File is written successfully\n");
fclose(op);

}

getch();


}