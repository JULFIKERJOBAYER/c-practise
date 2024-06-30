#include<stdio.h>
int main()
{
char ch[30]= "madam";
char ch1[30];
int i=0, j=0, len=0;

//len of string

while(ch[i] != '\0')
{
    len++;
    i++;
}
//reverse of string

for(j=0, i= len-1; i>=0; i--, j++)
{
    ch1[j]= ch[i];
}
ch1[j]='\0';

printf("str1= %s\n", ch);
printf("str2= %s\n", ch1);

//comparing string

int d= strcmp(ch,ch1);

if(d==0)
    printf("pallindrome string");
else
    printf("not pallindrome string");



return 0;
}
