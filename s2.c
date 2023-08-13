#include<stdio.h>
int main()
{
    char ch[50];
    printf("Enter sentence:\t ");
    gets(ch);

    int i;
    for(i=0;ch[i]!='\0';i++)
    {
        printf("%c\n",ch[i]);
    }
}