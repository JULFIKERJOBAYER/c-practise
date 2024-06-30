#include<stdio.h>
int main(){
FILE *student;

char name[20];
int cl, pn, i, num;

student= fopen("student_info.txt", "a");

if(student==NULL)
{
    printf("File does not exist.");

}
else
{
    printf("File opened. \n ");

    printf("ENTER THE NUMBER OF STUDENTS: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
        {  fflush(stdin);
            printf("ENTER NAME OF STUDENT %d : ", i);
            gets(name);
            printf("ENTER THE CLASS OF STUDENT %d : ", i);
            scanf("%d", &cl);
            printf("ENTER THE PHONE NUMBER OF STUDENT %d : ",i);
            scanf("%d", &pn);

            fprintf(student, "%s\t\t%d\t\t%d\n",name, cl, pn);
        }




    fclose(student);
}




}
