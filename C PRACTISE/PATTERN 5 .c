#include<stdio.h>
int main()
{
int n, row, col;

printf("ENTER THE NUMBER OF ROW: ");
scanf("%d", &n);

/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
*/
/*

for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
            {
                printf("%d ", col);
            }
            printf("\n");
    }
*/
/* A A A A
   B B B B
   C C C C
   D D D D
*/

/*
for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
            {
                printf("%c ", row+64);
            }
            printf("\n");
    }
*/
/* 1
   2 4
   3 6 9
   4 8 12 16
*/
/*

for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d ", col*row);
            }
            printf("\n");
    }
*/
/*    *
    * * *
  * * * * *
* * * * * * *
*/

/*
for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
             for(col=1; col<=2*row-1; col++)
            {
                printf("*");
            }
            printf("\n");
    }
*/
/*    A
    A B C
  A B C D E
A B C D E F G
*/

/*
for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
             for(col=1; col<=2*row-1; col++)
            {
                printf("%c", col+64);
            }
            printf("\n");

    }
*/
/*
A B C D E F G
  A B C D E
    A B C
      A
*/
/*

for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
             for(col=1; col<=2*row-1; col++)
            {
                printf("%c", col+64);
            }
            printf("\n");

    }

*/
/*    A
    A B C
  A B C D E
A B C D E F G
  A B C D E
    A B C
      A
*/
/*

for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf("  ");
            }
             for(col=1; col<=2*row-1; col++)
            {
                printf("%c ", col+64);
            }
        printf("\n");
    }
for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            {
                printf("  ");
            }
             for(col=1; col<=2*row-1; col++)
            {
                printf("%c ", col+64);
            }
            printf("\n");

    }
*/
/*   1
    1 2
   1 2 3
  1 2 3 4
*/
/*

for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
        for(col=1; col<=row; col++)
            {
                printf("%d ", col);
            }
            printf("\n");
    }
*/
/*   1 2 3 4
      1 2 3
       1 2
        1
*/

/*
for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
        for(col=1; col<=row; col++)
            {
                printf("%d ", col);
            }
            printf("\n");
    }
*/

/*      *
       * *
      * * *
     * * * *
      * * *
       * *
        *
*/
/*

for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
        for(col=1; col<=row; col++)
            {
                printf("* ");
            }
            printf("\n");
    }
for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
        for(col=1; col<=row; col++)
            {
                printf("* ");
            }
             printf("\n");
}
*/


/* *****
   *   *
   *   *
   *   *
   *****
*/
for(row=1; row<=n; row++)
{
    for(col=1; col<=n; col++)
    {
        if(row==1 || col==1 || row==n || col==n)
            printf("*");
            else
            {printf(" ");}
    }
     printf("\n");
}
/* *
   **
   * *
   *  *
   *   *
   ******
*/
for(row=1; row<=n; row++)
{
    for(col=1; col<=n; col++)
    {
        if( col==1 || row==n || col==row)
            printf("*");
            else
            {printf(" ");}
    }
     printf("\n");
}
/*
   *       *
     *   *
       *
     *   *
   *       *

*/
for(row=1; row<=n; row++)
{
    for(col=1; col<=n; col++)
    {
        if( col+row==n+1 || col==row)
            printf("*");
            else
            {printf(" ");}
    }
     printf("\n");
}

/*  1
    2 3
    4 5 6
    7 8 9 10
*/int count=1;
for(row=1; row<=n; row++)
{
    for(col=1; col<=row; col++)
    {
        printf("%d ", count++);
    }
      printf("\n");
}
/*    1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1
*/

for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("%d", col);
            }
            for(col=row-1; col>=1; col--)
            {
                printf("%d", col);
            }
            printf("\n");
    }
for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("%d", col);
            }
            for(col=row-1; col>=1; col--)
            {
                printf("%d", col);
            }
            printf("\n");
    }










    return 0;
    }












