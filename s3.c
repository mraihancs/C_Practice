#include<stdio.h>
#include<conio.h>

int main()
{

char str[30];
printf("Enter any word:\t ");
gets(str);
int i=0;
do{
 printf("%c\n",str[i]);
    i++;
}
while(str[i]!='\0');
/*

## with while loop::

*********************
while(str[i]!='\0');
{
     printf("%c\n",str[i]);
    i++;
}




*/


    getch();
}