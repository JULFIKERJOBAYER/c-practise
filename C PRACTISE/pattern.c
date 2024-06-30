#include<stdio.h>
int main()
{
int n, row, col;

printf("ENTER THE NUMBER OF ROW: ");
scanf("%d", &n);

/* 1
   1 2
   1 2 3
   1 2 3 4
*/


for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", col);
            }
            printf("\n");
    }


/*
    1
    2 2
    3 3 3
    4 4 4 4
*/


for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", row);
            }
            printf("\n");
    }


/*
        1
        1 0
        1 0 1
        1 0 1 0
*/


    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", col%2);
            }
            printf("\n");
    }



/*
        1
        0 0
        1 1 1
        0 0 0 0
*/

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", row%2);
            }
            printf("\n");

    }


/*
        A
        A B
        A B C
        A B C D
*/

 for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%c ", col+64);
            }
            printf("\n");
    }


/*
        A
        B B
        C C C
        D D D D


/* for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%c ", row+64);
            }
            printf("\n");
    }


/*
        *
        * *
        * * *
        * * * *
*/

for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf(" * ");
            }
            printf("\n");
    }


/* 1 2 3 4
   1 2 3
   1 2
   1

*/


for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", col);
            }
            printf("\n");
    }


/*  A B C D
    A B C
    A B
    A
*/

 for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            {
                printf("%c ", row+64);
            }
            printf("\n");
    }


/*
       1 0 1 0
       1 0 1
       1 0
       1
*/


    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", col%2);
            }
            printf("\n");
    }



/*
       * * * * *
       * * * *
       * * *
       * *
       *
*/


    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            {
                printf(" * ");
            }
            printf("\n");
    }



return 0;
}
