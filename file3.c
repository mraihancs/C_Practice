#include<stdio.h>
#include<conio.h>
int main()
{

FILE *file;
char name[20]="Maruf Raihan";
int len = strlen(name);
int i;


/*


###### 
###         fputc using here........
#######
###



*/
file = fopen("test4.txt","w");
if(file==NULL)
{
    printf("File doesn't exist");
}
else
{

printf("\nFile is opened");

for(i=0;i<len;i++)
{
    fputc(name[i],file);
}

printf("File is written successfully");
fclose(file);


}

getch();


}