#include<stdio.h>
int main()
{
int n, row, col;

printf("ENTER THE NUMBER: ");
scanf("%d", &n);

/* 1
   1 2
   1 2 3
   1 2
   1
*/

/*
for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", col);
            }
            printf("\n");
    }

for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", col);
            }
            printf("\n");
    }
 */

 /*
   1
   2 2
   3 3 3
   2 2
   1
*/

/*
for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", row);
            }
            printf("\n");
    }

for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", row);
            }
            printf("\n");
    }
*/

/*
   1
   1 0
   1 0 1
   1 0
   1
*/

/*
for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", col%2);
            }
            printf("\n");
    }

for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", col%2);
            }
            printf("\n");
    }
*/

/*
   A
   A B
   A B C
   A B
   A
*/

/*
for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%C ", col+64);
            }
            printf("\n");
    }

for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            {
                printf("%C ", col+64);
            }
            printf("\n");
    }
*/

/*
   #
   # #
   # # #
   # #
   #
*/

/*
for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf(" # ");
            }
            printf("\n");
    }

for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
            {
                printf(" # ");
            }
            printf("\n");
    }
*/


return 0;
}
