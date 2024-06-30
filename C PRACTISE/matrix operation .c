#include<stdio.h>
int main()
{
int A[10][10], B[10][10] ,C[10][10], i, j, k, sum=0, n, rowA, colA, rowB, colB;

printf("WELCOME TO MATRIX CALCULATION PAGE....\n");

up:                 //goto tag

printf("WHAT YOU WANT TO DO?\n\t1. ADDITION\n\t2. SUBSTRACTION\n\t3. MULTIFICATION\n");
printf("CHOOSE ONE: ");
scanf("%d", &n);

//addition

if(n==1)
{
printf("Enter The Number of ROW of A matrix: ");
scanf("%d", &rowA);
printf("Enter The Number of COLUMN of A matrix: ");
scanf("%d", &colA);
printf("Enter The Number of ROW of B matrix: ");
scanf("%d", &rowB);
printf("Enter The Number of COLUMN of B matrix: ");
scanf("%d", &colB);


while(rowA!=rowB || colA!=colB)
    {
    printf("Error! Row & Column of two matrix is not same....\n");
    printf("Enter The Number of ROW of A matrix: ");
    scanf("%d", &rowA);
    printf("Enter The Number of COLUMN of A matrix: ");
    scanf("%d", &colA);
    }

//scanning A matrix for addition

for(i=0; i<rowA; i++)
    {
        for(j=0; j<colA; j++)
            {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
            }
        printf("\n");
    }

//scanning B matrix for addition

for(i=0; i<rowB; i++)
    {
        for(j=0; j<colB; j++)
            {
            printf("B[%d][%d] = ", i+1, j+1);
            scanf("%d", &B[i][j]);
            }
        printf("\n");
    }

//printing A matrix for addition

printf("[A] = ");
        for(i=0; i<rowA; i++)
            {
            printf(" \t ");
                for(j=0; j<colA; j++)
                {
                printf(" %d ", A[i][j]);
                }
            printf("\n");
            }

printf("\n");

//printing B matrix for addition

printf("[B] = ");
        for(i=0; i<rowB; i++)
            {
            printf(" \t ");
                for(j=0; j<colB; j++)
                {
                printf(" %d ", B[i][j]);
                }
            printf("\n");
            }

printf("\n");

//printing result of addition

printf("[A] + [B] = ");

    for(i=0; i<rowB; i++)
        {
        printf(" \t ");
            for(j=0; j<colB; j++)
                {
                C[i][j]= A[i][j] + B[i][j];
                printf(" %d ", C[i][j]);
                }
        printf("\n");
        printf(" \t ");
        }

}
//substraction
if(n==2)
{
printf("Enter The Number of ROW of A matrix: ");
scanf("%d", &rowA);
printf("Enter The Number of COLUMN of A matrix: ");
scanf("%d", &colA);
printf("Enter The Number of ROW of B matrix: ");
scanf("%d", &rowB);
printf("Enter The Number of COLUMN of B matrix: ");
scanf("%d", &colB);


while(rowA!=rowB || colA!=colB)
    {
    printf("Error! Row & Column of two matrix is not same....\n");
    printf("Enter The Number of ROW of A matrix: ");
    scanf("%d", &rowA);
    printf("Enter The Number of COLUMN of A matrix: ");
    scanf("%d", &colA);
    }
//scanning A matrix for substraction

        for(i=0; i<rowA; i++)
        {
            for(j=0; j<colA; j++)
            {
             printf("A[%d][%d] = ", i+1, j+1);
             scanf("%d", &A[i][j]);
            }
            printf("\n");
        }

//scanning B matrix for substraction

        for(i=0; i<rowB; i++)
        {
            for(j=0; j<colB; j++)
            {
             printf("B[%d][%d] = ", i+1, j+1);
             scanf("%d", &B[i][j]);
            }
            printf("\n");
        }

//printing A matrix for substraction

printf("[A] = ");
        for(i=0; i<rowA; i++)
            {
            printf(" \t ");
                for(j=0; j<colA; j++)
                {
                printf(" %d ", A[i][j]);
                }
                printf("\n");
            }

printf("\n");

//printing B matrix for substraction

printf("[B] = ");
        for(i=0; i<rowB; i++)
            {
             printf(" \t ");
                for(j=0; j<colB; j++)
                {
                printf(" %d ", B[i][j]);
                }
             printf("\n");
            }
printf("\n");

//calculating substraction

printf("[A] - [B] = ");
        for(i=0; i<rowB; i++)
            {
            printf(" \t ");
                for(j=0; j<colB; j++)
                {
                C[i][j]= A[i][j] - B[i][j];
                printf(" %d ", C[i][j]);
                }
            printf("\n");
            printf(" \t ");
            }
}
//Multification
if(n==3)
{
printf("Enter The Number of ROW of A matrix: ");
scanf("%d", &rowA);
printf("Enter The Number of COLUMN of A matrix: ");
scanf("%d", &colA);
printf("Enter The Number of ROW of B matrix: ");
scanf("%d", &rowB);
printf("Enter The Number of COLUMN of B matrix: ");
scanf("%d", &colB);


while(rowA!=colB)
    {
    printf("Error! Row of first matrix and column of second matrix is not same....\n");
    printf("Enter The Number of ROW of A matrix: ");
    scanf("%d", &rowA);
    printf("Enter The Number of COLUMN of A matrix: ");
    scanf("%d", &colA);
    }
//scanning A matrix for multification

        for(i=0; i<rowA; i++)
        {
            for(j=0; j<colA; j++)
            {
             printf("A[%d][%d] = ", i+1, j+1);
             scanf("%d", &A[i][j]);
            }
            printf("\n");
        }

//scanning B matrix for multification

        for(i=0; i<rowB; i++)
        {
            for(j=0; j<colB; j++)
            {
             printf("B[%d][%d] = ", i+1, j+1);
             scanf("%d", &B[i][j]);
            }
            printf("\n");
        }

//multiplicating

 for(i=0; i<rowA; i++)
        {
            for(j=0; j<colB; j++)
            {
                 for(k=0; k<colA; k++)
                 {
                  sum= sum+ A[i][k]* B[k][j];
                 }
                C[i][j]=sum;
                sum=0;
            }
            printf("\n");
        }


//printing A matrix for multification

printf("[A] = ");
        for(i=0; i<rowA; i++)
            {
             printf(" \t ");
                for(j=0; j<colA; j++)
                {
                printf(" %d ", A[i][j]);
                }
             printf("\n");
            }
printf("\n");

//printing B matrix for multification

printf("[B] = ");
        for(i=0; i<rowB; i++)
            {
             printf(" \t ");
                for(j=0; j<colB; j++)
                {
                printf(" %d ", B[i][j]);
                }
             printf("\n");
            }
printf("\n");

//printing multification

printf("[A]*[B] = ");
        for(i=0; i<rowA; i++)
            {
            printf(" \t ");
                for(j=0; j<colB; j++)
                {
                printf(" %d ", C[i][j]);
                }
                printf("\n");
                printf(" \t ");
            }

printf("\n");
}
else
{
   printf("\nINVALID CHOICE.....TRY AGAIN\n\n");
   goto up;
}


return 0;
}
