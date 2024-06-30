#include<stdio.h>
struct person
{
   char name[50];
   int age;
   double salary;
};

void work( struct person person[100])
{
    int i,n;

   printf("ENTER THE NUMBER OF PERSON: ");
   scanf("%d",&n);

    for(i=0; i<n; i++)
{
     printf("\nENTER THE INFORMATION OF PERSON %d: \n\n", i+1);
     printf("  ENTER THE NAME: ");
     fflush(stdin);
     fgets(person[i].name, sizeof(person[i].name), stdin);
     printf("  ENTER THE AGE: ");
     scanf("%d",&person[i].age);
     printf("  ENTER THE SALARY: ");
     scanf("%lf",&person[i].salary);

}
printf("\n\n");
printf("\t\t INFORMATION SHEET \n");

for(i=0; i<n; i++)
{
     printf("\nPERSON %d : \n\n", i+1);

     printf("  NAME: \t%s", person[i].name );

     printf("  AGE: \t\t%d\n", person[i].age);

     printf("  SALARY: \t%.2lf\n", person[i].salary);

}

}

int main()
{
struct person person[100];


work(person);
}
