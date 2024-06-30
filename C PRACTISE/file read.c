
#include<stdio.h>
int main(){
FILE *julfiker;

char ch[40];


julfiker= fopen("jjo.txt", "r");

if(julfiker==NULL)
{
    printf("File does not exist.");

}
else
{
    printf("File opened. \n ");

while(!feof(julfiker))
{
    fgets(ch, 50, julfiker);
    printf("%s\n",ch);
}




    fclose(julfiker);
}




}
