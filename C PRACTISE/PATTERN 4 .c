#include<stdio.h>
int main()
{
int n, row, col;

printf("ENTER THE NUMBER: ");
scanf("%d", &n);

/*     1
     1 2
   1 2 3
     1 2
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
            printf("\n");
    }

/*   A
    AB
   ABC
    AB
     A
*/


for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
        for(col=1; col<=row; col++)
            {
                printf("%C", col+64);
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
                printf("%c", col+64);
            }
            printf("\n");
    }


/*   1
    00
   111
  0000
   111
    00
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
                printf("%d", row%2);
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
                printf("%d", row%2);
            }
            printf("\n");
    }




}


