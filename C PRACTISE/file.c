#include<stdio.h>
int main(){
FILE *julfiker;

char name[50];
char birth[10];
int i, age;

julfiker= fopen("jjo.txt", "a");

if(julfiker==NULL)
{
    printf("File does not exist.");

}
else
{
    printf("File opened. \n ");


    printf("ENTER YOUR NAME: ");
    gets(name);
    printf("ENTER YOUR AGE: ");
    scanf("%d",&age);
    fflush(stdin);
    printf("ENTER YOUR BIRTH DATE: ");
    gets(birth);

    fprintf(julfiker, "NAME: %s\nAGE: %d\nDATE OF BIRTH: %s\n",name, age, birth);





    printf("file closed \n ");
    fclose(julfiker);
}




}
